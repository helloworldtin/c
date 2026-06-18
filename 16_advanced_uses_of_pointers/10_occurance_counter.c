#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

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

int count_occurrences(struct node *list, int n)
{
    int i = 0;
    while(list != NULL){
        if(list->value == n)
            i++;
        list  = list->next;
    }

    return i;
}

int main(void)
{
    struct node *list = NULL;
    list = add_to_list(list, 1);
    list = add_to_list(list, 1);
    list = add_to_list(list, 10);
    list = add_to_list(list, 1);
    print_list(list);
    printf("The count of 1 in list is %d\n", count_occurrences(list, 1));
    return 0;
}
