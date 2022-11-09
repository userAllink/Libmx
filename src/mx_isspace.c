#include "../inc/libmx.h"

bool mx_isspace(char c) {
    if ((9 <= c && c <= 13) || c == 32) 
        return true;

    return false;
}
