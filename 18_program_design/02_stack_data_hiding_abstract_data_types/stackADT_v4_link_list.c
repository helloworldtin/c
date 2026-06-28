#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "stackADT_v3.h"


struct node {
    Item data;
    struct node *next;
};

struct stack_type {
    struct node *top;
};

static void terminates(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

Stack crete(void)
{
    Stack s = malloc(sizeof(struct stack_type));
    if(s == NULL)
        terminates("Error in create: stack could not be created");

    s->top = NULL;
    return s;
}

void destroy(Stack s)
{
    make_empty(s);
    free(s);
}

void make_empty(Stack s)
{
    while(!is_empty(s))
        pop(s);
}

bool is_empty(Stack s)
{
    return s->top == NULL;
}

bool is_full(Stack s)
{
    return false;
}

void push(Stack s, int i)
{
    struct node *new_node = malloc(sizeof(struct node));
    if(new_node == NULL)
        terminates("Error in push: stack is full");
    new_node->data = i;
    new_node->next = s->top;
    s->top = new_node;
}

Item pop(Stack s)
{
    struct node *old_top;
    Item i;

    if(is_empty(s))
        terminates("Error in pop: stack is empty");
    old_top = s->top;
    i =  old_top->data;
    s->top = old_top->next;
    free(old_top);
    return i;
}
