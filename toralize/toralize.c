#include "toralize.h"

static struct sockaddr_in getSocketAddr()
{
    struct sockaddr_in addr;
    addr.sin_family = AF_INET;
    addr.sin_port = htons(PROXYPORT);
    addr.sin_addr.s_addr = inet_addr(PROXY);
    return addr;
}

static int connectToProxy(const struct sockaddr_in* proxy_addr)
{
    int socket_fd;
    int (*original_connect)(int, const struct sockaddr*, socklen_t);

    // find the address of the next connect function, skipping this one to prevent infinite recursion
    original_connect = dlsym(RTLD_NEXT, "connect");
    // try to create a socket fd using tcp
    socket_fd = socket(AF_INET, SOCK_STREAM, IPPROTO_IP);
    if (socket_fd < 0) {
        perror("socket");
        exit(EXIT_FAILURE);
    }

    // try to open connection (upcast internet to generic socket)
    if (original_connect(socket_fd, (struct sockaddr*)proxy_addr, sizeof(*proxy_addr)) != 0) {
        int err = errno;
        fprintf(stderr, "connect -> errno=%d: %s\n", err, strerror(err));
        exit(EXIT_FAILURE);
    };

    return socket_fd;
}

static void sendConnectionRequestThroughProxy(
    const int socket_fd,
    const struct sockaddr_in* remote_addr)
{
    Req* req;
    Res* res;
    char buf[ressize];
    int success;

    // send request
    req = request(remote_addr);
    write(socket_fd, req, reqsize);

    // read response
    memset(buf, 0, ressize);
    success = read(socket_fd, buf, ressize);
    if (success < 1) {
        perror("read");
        free(req);
        close(socket_fd);
        exit(EXIT_FAILURE);
    };
    res = (Res*)buf;
    if (res->cd != 90) {
        fprintf(stderr, "Unable to traverse the proxy, error code: %d\n", res->cd);
        free(req);
        close(socket_fd);
        exit(EXIT_FAILURE);
    }

    free(req);
}

Req *request(const struct sockaddr_in* sock)
{
    Req* req = malloc(reqsize);
    req->vn = 4;
    req->cd = 1;
    req->dstport = sock->sin_port;
    req->dstip = sock->sin_addr.s_addr;
    strncpy(req->userid, USERNAME, 8);

    return req;
}

int connect(int fd, const struct sockaddr* remote_addr, socklen_t addrlen)
{
    int socket_fd;

    const struct sockaddr_in proxy_addr = getSocketAddr();
    const struct sockaddr_in* remote_addr_in = (struct sockaddr_in*)remote_addr;

    socket_fd = connectToProxy(&proxy_addr);
    sendConnectionRequestThroughProxy(socket_fd, remote_addr_in);

    dup2(socket_fd, fd);

    return 0;
}
