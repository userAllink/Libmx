#include "../inc/libmx.h"

void mx_str_reverse(char *str) {
    if (str == NULL)
        return;

    int right = mx_strlen(str) - 1;
    for (int left = 0; left < right; left++) {
        mx_swap_char(&str[left], &str[right]);
        right--;
    }
}


