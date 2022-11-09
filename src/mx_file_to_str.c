#include "../inc/libmx.h"

char *mx_file_to_str(const char *file) {
    if (file == NULL) 
        return NULL;
 
    int fl = open(file, O_RDONLY);

    if (fl < 0)
        return NULL;
    
    int length = mx_filelen(fl);
    
    close(fl);

    fl = open(file, O_RDONLY);

    char *str = mx_strnew(length);
    read(fl, str, length);

    close(fl);
    
    return str;
}


