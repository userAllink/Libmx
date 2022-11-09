#include "../inc/libmx.h"

char *mx_del_extra_spaces(const char *str) {
    if (str == NULL) 
        return NULL;
    
    char *temp = NULL;
    temp = mx_strnew(mx_strlen(str));
    

    int j = 0;
    for (int i = 0; str[i]; i++) {
        if (!(mx_isspace(str[i]))) {
            temp[j] = str[i];
            j++;
        }
        if (!(mx_isspace(str[i])) && mx_isspace(str[i + 1])) {
            temp[j] = ' ';
            j++;
        }
    }
    
    return mx_strtrim(temp);
}


