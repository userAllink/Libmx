#include "../inc/libmx.h"

int mx_quicksort(char **arr, int left, int right) {
    if (arr == NULL)
        return -1;

    char* temp;
    char* pivot = arr[(left + right) / 2];
    int l_marker = left;
    int r_marker = right;
    int counter = 0;
    
    while (l_marker <= r_marker) {
        while (mx_strlen(arr[l_marker]) < mx_strlen(pivot)) 
            l_marker++;
            
        while (mx_strlen(arr[r_marker]) > mx_strlen(pivot)) 
            r_marker--;
            
        if (l_marker <= r_marker) {
            if (l_marker < r_marker) {
                temp = arr[l_marker];
                arr[l_marker] = arr[r_marker];
                arr[r_marker] = temp;
                counter++;
            }
            l_marker++;
            r_marker--;
            }
        }

    if (l_marker < right) 
        mx_quicksort(arr, l_marker, right);
    
    if (left < r_marker) 
        mx_quicksort(arr, left, r_marker);

    return counter;    
}


