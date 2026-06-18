#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;           /* data store in that node */
    struct node *next;   /* pointer to the next node */
};

/**********************************************************
 *   list (a pointer to the first node in the old list)   *
 *   value = value for the new node.                      *
 **********************************************************/
struct node *add_to_list(struct node *list, int value)
{
   struct node *new_node;
   new_node = malloc(sizeof(struct node));

   if(new_node == NULL){
       printf("Error: malloc failed to add_to_list ");
       exit(EXIT_FAILURE);
   }

   new_node -> value = value;
   new_node -> next = list;
   return new_node;
}

struct node *read_number(void)
{
    struct node *first = NULL;
    int n;

    printf("Enter a series of integers (0 to terminates): ");
    for(;;){
        scanf("%d", &n);
        if(n == 0)
            return first;

        first = add_to_list(first, n);
    }
}

struct node *search_list(struct node *list, int n)
{
    struct node *p;

    for(p = list; p != NULL; p =  p -> next){
        if(p->value == n)
            return p;
    }

    return NULL;
}
struct node *search_list_two(struct node *list, int n)
{
    for(; list != NULL; list = list->next){
        if(list->value == n)
            return list;
    }

    return NULL;
}

struct node *search_list_three(struct node *list, int n)
{
    for(; list != NULL && list -> value != n; list = list -> next)
        ;
    return list;
}

struct node *search_list_four(struct node *list, int n)
{
    while(list != NULL && list->value != n)
        list = list -> next;
    return list;
}

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

void add_to_list_change_not_return(struct node **list, int n)
{
    struct node *new_node;
    new_node = malloc(sizeof(struct node));

    if(new_node == NULL){
        printf("Error: malloc failed to add_to_list\n");
        exit(EXIT_FAILURE);
    }

    new_node -> value = n;
    new_node -> next = *list;

    *list = new_node;
}


int main(void)
{
    struct node *list;
    add_to_list_change_not_return(&list, 10);
    return 0;
}
