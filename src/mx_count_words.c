#include "../inc/libmx.h"

int mx_count_words(const char *str, char c) {
    if (str == NULL)
        return -1;

    bool isWord = 0;
    int counter = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) 
            isWord = 0;
        else if(isWord == 0) {
            isWord = 1;
            counter++;
        }
    }

    return counter;
}


