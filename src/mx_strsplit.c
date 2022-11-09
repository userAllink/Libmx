#include "../inc/libmx.h"

char **mx_strsplit(const char *s, char c) {
    if (s == NULL) 
        return NULL;

    int size = mx_count_words(s, c);
    char **arr = malloc(sizeof(char *) * (size + 1));
    
    int word_len = 0;
    int j = 0;

    for (int i = 0; i < size; i++) {
        while (*s == c)
            s++;

        while (s[j] != c) {
            word_len++;
            j++;
        }
        
        arr[i] = mx_strndup(s, word_len);
        s += word_len;
        word_len = 0;
        j = 0;
    }
    
    arr[size] = NULL;

    return arr;
}


