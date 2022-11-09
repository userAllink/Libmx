#include "../inc/libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
    unsigned char *temp = malloc(len);

    for (size_t i = 0; i < len; i++)
        ((unsigned char *)temp)[i] = ((unsigned char *)src)[i];
 
    for (size_t i = 0; i < len; i++)
        ((unsigned char *)dst)[i] = temp[i];
 
    free(temp);
    
    return dst;
}


