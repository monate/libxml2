#include<tis_builtin.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include <iconv.h>
#include <netdb.h>

time_t time(time_t *tloc) {
    printf("[TIS]: time returns 42\n");
    return 42;
}

int rand_r(unsigned int *seedp) {
    printf("[TIS]: rand_r returns 42\n");
    return 42;
}

iconv_t iconv_open(const char *tocode, const char *fromcode)
{
    iconv_t t = {0};
    printf("TIS]: iconv_open\n");
    return t;
}

int getaddrinfo(const char *node, const char *service,
                const struct addrinfo *hints,
                struct addrinfo **res)
{
    printf("[TIS]: getaddrinfo(%s)\n", node);
    static struct addrinfo tis_addr = {0, 0, 0, 0, 16, 0, "tis_addrname", 0};
    *res = & tis_addr;
    return 0;
}

void freeaddrinfo(struct addrinfo *res)
{
    printf("[TIS]: freeaddrinfo\n");
    return;
}
