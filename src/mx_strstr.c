#include "../inc/libmx.h"

char *mx_strstr(const char *haystack, const char *needle)
{
    if (haystack == NULL || needle == NULL)
        return NULL;
    
    if (mx_strlen(needle) == 0) 
        return (char *)haystack;

    while (*haystack != '\0')
    {
        if ((*haystack == *needle) && mx_strncmp(haystack, needle, mx_strlen(needle)) == 0) {
            return (char *)haystack;
        }
        haystack++;
    }
 
    return NULL;
}


