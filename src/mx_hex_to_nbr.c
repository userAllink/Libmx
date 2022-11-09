#include "../inc/libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    if (hex == NULL) 
        return 0;

    int length = 0;
    while (hex [length] != '\0')
        length++;

    unsigned long nbr = 0;
    unsigned long temp = 1;

    for (int i = 0; i <= length; i++) {
        if (mx_isdigit(hex[length - i])) {
            nbr = nbr + (hex[length - i] - 48) * temp;
            temp = temp * 16;
        }
        if (mx_isupper(hex[length - i])) {
            nbr = nbr + (hex[length - i] - 55) * temp;
            temp = temp * 16;
        }
        if (mx_islower(hex[length - i])) {
            nbr = nbr + (hex[length - i] - 87) * temp;
            temp = temp * 16;
        }
    }

    return nbr;
}


