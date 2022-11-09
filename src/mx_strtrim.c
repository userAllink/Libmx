#include "../inc/libmx.h"

char *mx_strtrim(const char *str) {
    if (str == NULL) 
        return NULL;

    while (mx_isspace(*str))
        str++;

    int i = mx_strlen(str) - 1;

    while (i > 0) {
        if (mx_isspace(str[i]))
            i--;
        else 
            break;
    }    

    return mx_strndup(str, i + 1);
}


