#include "../inc/libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
    if (n == 0)
        return 0;

    const unsigned char *ps1 = s1;
    const unsigned char *ps2 = s2;

    for (size_t i = 0; i < n; i++) {
        if (ps1[i] != ps2[i])
            return ps1[i] - ps2[i];
    }

    return 0;
}


