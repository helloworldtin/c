#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "02_stack_data_hiding_abstract_data_types/stackADT_v2.h"

#define  INITIAL_SIZE 100

struct stack_type {
    int top;
    Item *contents;
    int max_size;
};

static void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

Stack create(void)
{
    Stack s = malloc(sizeof(struct stack_type));
    if (s == NULL)
           terminate("Error in create: stack could not be created");

    s->contents = malloc(sizeof(Item) * INITIAL_SIZE);

    if (s->contents == NULL) {
           free(s);
           terminate("Error allocating stack contents");
       }
    s->max_size = INITIAL_SIZE;
    if(s == NULL)
        terminate("Error in create: stack could not be created");
    s->top = 0;
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
    return false;
}

void push(Stack s, int i)
{
    if(is_full(s))
        terminate("Error in push: stack is full.");
    if(s->top == s->max_size){
        s->max_size = s->max_size * 2;
        Item *temp = realloc(s->contents, sizeof(Item) * s->max_size);

        if(temp == NULL)
            terminate("Out of memory");
        s->contents = temp;
    }
    s->contents[s->top++] = i;
}

int pop(Stack s)
{
    if(is_empty(s))
        terminate("Error in pop: stack is empty");
    return s->contents[--s->top];
}
