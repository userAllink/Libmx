#include "../inc/libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    unsigned char *str = (unsigned char *)s + n;

    while (n > 0) {
        if (*str == (unsigned char) c)
            return str;
        str--;
        n--;
    }

    return NULL;
} 


