#include "../inc/libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
    if (str == NULL || sub == NULL)
        return -2;

    int str_len = mx_strlen(str);
    int sub_len = mx_strlen(sub);

    for (int i = 0; i < str_len; i++) {
        if (mx_strncmp(str, sub, sub_len) == 0)
            return i;
        str++;
    }
    
    return -1;
}


