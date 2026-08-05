#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../18_program_design/02_stack_data_hiding_abstract_data_types/stackADT_v2.h"

#define  INITIAL_SIZE 100

struct stack_type {
    int top;
    Item *contents;
    int max_size;
};

Stack create(void)
{
    Stack s = malloc(sizeof(struct stack_type));
    assert(s != NULL);

    s->contents = malloc(sizeof(Item) * INITIAL_SIZE);
    assert(s->cotents != NULL);
    
    s->max_size = INITIAL_SIZE;
    assert(s != NULL);
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
    assert(is_full(s) != true);

    if(s->top == s->max_size){
        s->max_size = s->max_size * 2;
        Item *temp = realloc(s->contents, sizeof(Item) * s->max_size);

        assert(temp != NULL);
        s->contents = temp;
    }
    s->contents[s->top++] = i;
}

int pop(Stack s)
{
    assert(is_empty(s) != true);
    return s->contents[--s->top];
}
