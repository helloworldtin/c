#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;           /* data store in that node */
    struct node *next;   /* pointer to the next node */
};

struct node *delete_from_list(struct node *list, int n)
{
    struct node *curr, *prev;

    for(curr= list, prev = NULL; curr != NULL && curr -> value != n; prev = curr, curr = curr -> next)
        ;

    if(curr == NULL)
        return list;
    if(prev == NULL)
        list = list -> next;
    else
        prev -> next = curr -> next;
    free(curr);
    return list;
}

struct node *delete_from_list_v2(struct node *list, int n)
{
    struct node *curr;

    if(list == NULL)
        return NULL;

    if(list -> value == n){
        struct node *new_head = list -> next;
        free(list);
        return new_head;
    }

    for(curr = list; curr->next != NULL && curr->next->value != n; curr = curr -> next)
        ;

    if(curr->next != NULL){
        struct node *temp =curr -> next;
        curr->next = curr -> next -> next;
        free(temp);
    }

    return list;
}
