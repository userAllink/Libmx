#include "../inc/libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    if (str == NULL || sub == NULL || replace == NULL)
        return NULL;

    int str_len = mx_strlen(str);
    int sub_len = mx_strlen(sub);
    int rep_len = mx_strlen(replace);
    int res_len = str_len + mx_count_substr(str, sub) * (rep_len - sub_len);
    char *result = mx_strnew(res_len);
    
    for (int i = 0; i < res_len; i++) {
        if (mx_strncmp(str, sub, sub_len) == 0) {
            mx_memcpy(&result[i], replace, rep_len);
            i += rep_len - 1;
            str += sub_len;
        } 
        else {
            result[i] = *str;
            str++;
        }
    }

    return result;
}


