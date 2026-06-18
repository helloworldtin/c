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


struct node *find_last(struct node *list, int n)
{
    struct node *last_n_address = NULL;

    while(list != NULL){
        if(list->value == n)
            last_n_address = list;
        list = list -> next;
    }

    return last_n_address;
}

int main(void)
{
    struct node *list = NULL;
    list = add_to_list(list, 1);
    list = add_to_list(list, 1);
    list = add_to_list(list, 10);
    list = add_to_list(list, 1);
    print_list(list);
    printf("The last address of 1 is %p\n", find_last(list, 1));
    return 0;
}
