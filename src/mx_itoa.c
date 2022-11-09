#include "../inc/libmx.h"

char *mx_itoa(int number) {
    if (number == -2147483648)
        return "-2147483648";

    if (number == 0) 
        return "0";

    int temp = number;
    int length = 0;
    while (number) {
        number /= 10;
        length++;
    }

    char *result = mx_strnew(length);

    for (int i = 0; i < length; i++) {
        if (temp < 0) {
            result[length] = '-';
            temp *= -1;
        }
        result[i] = (temp % 10) + '0';
        temp /= 10;
    }
    mx_str_reverse(result);

    return result;
}


