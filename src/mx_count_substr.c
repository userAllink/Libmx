#include "../inc/libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    if (str == NULL || sub == NULL)
        return -1;

    if(mx_strlen(sub) == 0)
        return 0;
    
    int length1 = mx_strlen(str);
    int length2 = mx_strlen(sub);
    int count = 0;
    bool isSub = true;

    for (int i = 0; i <= length1 - length2; i++) {
        isSub = true;
        for (int j = 0; j < length2; j++) {
            if (str[i + j] != sub[j]) {
                isSub = false;
                break;
            }
        }
        if (isSub) {
            count++;
            i = i + length2 - 1;
        }
    }

    return count;
}


