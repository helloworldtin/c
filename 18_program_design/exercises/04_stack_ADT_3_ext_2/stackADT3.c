#include <stdio.h>
#include <stdlib.h>
#include "stackADT3.h"

struct stack_type  {
    void **contents;
    int top;
    int size;
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

    s->contents = malloc(size * sizeof(void *));
    if(s->contents == NULL){
        free(s);
        terminate("Error in create: stack could not be created.");
    }

    s->top = 0;
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
}

bool is_empty(Stack s)
{
    return s->top == 0;
}

bool is_full(Stack s)
{
    return s->top == s->size;
}

void push(Stack s, void *p)
{
    if(is_full(s))
        terminate("Error in push: stack is full");

    s->contents[s->top++] = p;
}

void *pop(Stack s){
    if(is_empty(s))
        return NULL;
    return s->contents[--s->top];
}
