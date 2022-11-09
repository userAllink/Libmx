#include "../inc/libmx.h"

void mx_push_front(t_list **list, void *data) {
    if (data == NULL) 
        return;

    if (*list == NULL) {
        *list = mx_create_node(data);
        return;
    }
    
    t_list *head = NULL;
    head = mx_create_node(data);
    head->next = *list;
    *list = head;
}


