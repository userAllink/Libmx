#include "../inc/libmx.h"

char *mx_strncpy(char *dst, const char *src, int len) {
    if (len <= 0) 
        return dst;
    
    if (len > mx_strlen(src))
        len = mx_strlen(src);

    for (int i = 0; i < len; i++) 
        dst[i] = src[i];
    
    dst[len] = '\0';
    
    return dst;
}


