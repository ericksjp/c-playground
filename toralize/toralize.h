/* toralize.h */
#include <arpa/inet.h>
#include <dlfcn.h>
#include <errno.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

#define PROXY "127.0.0.1"
#define PROXYPORT 9050
#define USERNAME "toraliz"
#define reqsize sizeof(struct proxy_request)
#define ressize sizeof(struct proxy_response)

typedef unsigned char int8;
typedef unsigned short int16;
typedef unsigned int int32;

struct proxy_request {
    int8 vn;
    int8 cd;
    int16 dstport;
    int32 dstip;
    char userid[8];
};
struct proxy_response {
    int8 vn;
    int8 cd;
    int16 _;
    int32 __;
};

typedef struct proxy_request Req;
typedef struct proxy_response Res;

Req* request(const struct sockaddr_in*);
int connect(int sockfd, const struct sockaddr* addr, socklen_t addrlen);
