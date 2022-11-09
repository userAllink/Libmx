#include "../inc/libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    int temp = nbr;
    int length = 0;
    
    while (temp != 0) {
        temp /= 16;
        length++;
    }

    char *hex = mx_strnew(length);
    temp = nbr;

    while (temp != 0) {
        if (temp % 16 < 10)
            hex[length - 1] = 48 + temp;
        else 
            hex[length - 1] = 87 + temp;
    }

    return hex;
}


