#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


struct node {
    int value;
    struct node *next;
};


struct node *top = NULL;

void make_empty(void)
{
    struct node *temp;
    while(top != NULL){
        temp = top;
        top = temp -> next;
        free(temp);
    }
}

bool is_empty(void)
{
    return top == NULL;
}

bool push(int value)
{
    struct node *new_node;

    new_node = malloc(sizeof(struct node));
    if(new_node == NULL)
        return false;
    new_node->value = value;
    new_node->next = top;
    return true;
}

int pop(void)
{
    struct node *temp = top;
    int i;

    if(is_empty()){
        printf("Stack is empty nothing to pop\n");
        exit(EXIT_FAILURE);
    }

    i = top->value;
    top = temp->next;
    free(temp);

    return i;
}
