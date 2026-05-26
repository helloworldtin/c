#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


#define STACK_SIZE 100

int contents[STACK_SIZE];
int *top_ptr = NULL;


void make_empty(void)
{
    top_ptr = &contents[0];
}

bool is_empty(void)
{
    return top_ptr == &contents[0];
}

bool is_full(void)
{
    return top_ptr > &contents[STACK_SIZE];
}
