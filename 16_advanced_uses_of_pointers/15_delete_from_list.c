#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

void delete_from_list(struct node **list, int n)
{
    struct node *curr, *prev;

    for(curr= *list, prev = NULL; curr != NULL && curr -> value != n; prev = curr, curr = curr -> next)
        ;

    if(curr == NULL)
        *list = *list;
    if(prev == NULL)
        *list = (*list) -> next;
    else
        prev -> next = curr -> next;
    free(curr);
    *list = *list;
}

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

void print_list(struct node *list)
{
    while(list != NULL){
        printf("%d -> ", list->value);
        list = list->next;
    }
    printf("\n");
}

int main(void)
{
    struct node *list = NULL;
    list = add_to_list(list, 1);
    list = add_to_list(list, 1);
    list = add_to_list(list, 10);
    list = add_to_list(list, 1);
    delete_from_list(&list, 1);
    delete_from_list(&list, 1);
    delete_from_list(&list, 1);
    print_list(list);
    return 0;
}
