#include "../inc/libmx.h"

t_list *mx_create_node(void *data) {
    if(data == NULL) 
        return NULL;

    t_list *head = NULL;
    head = (t_list *)malloc(sizeof(t_list));
    head->data = data;
    head->next = NULL;

    return head;
}


