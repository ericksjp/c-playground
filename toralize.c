#include "toralize.h"

int main(int argc, char* argv[])
{
    char *endptr, *host;
    int port, s;
    struct sockaddr_in sock;
    Req* req;
    char buf[ressize];
    Res* res;
    const int tmpLen = 512;
    char tmp[tmpLen];

    if (argc < 3) {
        fprintf(stderr, "Usage: %s  <host> <port>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    host = argv[1];
    port = parsePort(argv[2]);

    // try to create a socket using tcp
    s = socket(AF_INET, SOCK_STREAM, 0);
    if (s < 0) {
        perror("socket");
        exit(EXIT_FAILURE);
    }

    // describe socket adress
    sock.sin_family = AF_INET;
    sock.sin_port = htons(PROXYPORT);
    sock.sin_addr.s_addr = inet_addr(PROXY);

    // try to open connection (upcast internet to generic socket)
    if (connect(s, (struct sockaddr*)&sock, sizeof(sock)) != 0) {
        perror("connect");
        exit(EXIT_FAILURE);
    };

    printf("Connected to proxy\n");

    // try to send a connection request to the proxy server
    req = request(host, port);
    write(s, req, reqsize);
    memset(buf, 0, ressize);
    if (read(s, buf, ressize) < 1) {
        perror("read");
        free(req);
        close(s);
        exit(EXIT_FAILURE);
    };

    res = (Res*)buf;

    // if proxy response with error
    if (res->cd != 90){
        fprintf(stderr, "Unable to traverse the proxy, error code: %d\n", res->cd);
        free(req);
        close(s);
        exit(EXIT_FAILURE);
    }

    printf("Successfully connected through the proxy to %s:%d\n", host, port);

    // sending a head request through proxy
    memset(tmp, 0, tmpLen);
    snprintf(tmp, tmpLen - 1,
             "HEAD / HTTP/1.0\r\n"
             "Host: %s\r\n"
             "\r\n", host);
    write(s, tmp, strlen(tmp));
    memset(tmp, 0, tmpLen);

    // reading response
    read(s, tmp, tmpLen - 1);
    printf("'%s'\n", tmp);

    close(s);
    free(req);
    return 0;
}

Req* request(const char* dstip, const int dstport)
{
    Req* req = malloc(reqsize);
    req->vn = 4;
    req->cd = 1;
    req->dstport = htons(dstport);
    req->dstip = inet_addr(dstip);
    strncpy(req->userid, USERNAME, 8);

    return req;
}

static int parsePort(char* str)
{
    char* endptr;
    errno = 0;
    long long port = strtoll(str, &endptr, 10);

    if (errno == ERANGE) {
        perror("strtoll");
        exit(EXIT_FAILURE);
    }

    if (*endptr != '\0') {
        fprintf(stderr, "Invalid characters in port: %s\n", endptr);
        exit(EXIT_FAILURE);
    }

    if (endptr == str) {
        fprintf(stderr, "No digits were found");
        exit(EXIT_FAILURE);
    }

    if (port > 65535 || port < 0) {
        fprintf(stderr, "Error: Invalid port number. Please provide a port number " "in the range 1-65535.\n");
        exit(EXIT_FAILURE);
    }

    return (int)port;
}
