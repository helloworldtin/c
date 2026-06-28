#include <stdio.h>
#include <stdlib.h>
#include "stackADT3.h"

struct stack_type  {
    Item *contents;
    int top;
    int size;
    int len;
};

static void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

Stack create(int size)
{
    Stack s = malloc(sizeof(struct stack_type));
    if(s == NULL)
        terminate("Error in create: stack could not be created.");

    s->contents = malloc(size * sizeof(Item));
    if(s->contents == NULL){
        free(s);
        terminate("Error in create: stack could not be created.");
    }

    s->top = 0;
    s->len = 0;
    s->size = size;
    return s;
}

void destroy(Stack s)
{
    free(s->contents);
    free(s);
}

void make_empty(Stack s)
{
    s->top = 0;
    s->len = 0;
}

bool is_empty(Stack s)
{
    return s->top == 0;
}

bool is_full(Stack s)
{
    return s->top == s->size;
}

void push(Stack s, int i)
{
    if(is_full(s))
        terminate("Error in push: stack is full");

    s->contents[s->top++] = i;
    s->len += 1;
}

Item pop(Stack s){
    if(is_empty(s))
        terminate("Error in pop: stack is empty");
    s->len -= 1;
    return s->contents[--s->top];
}

int length(Stack s)
{
    return s->len;
}
