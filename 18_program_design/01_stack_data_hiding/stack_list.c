#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define PUBLIC
#define PRIVATE static
/*
 * We can replace the static or private function with PRIVATE
 * like  PRIVATE void terminate();
 * and for PUBLIC
 * PUBLIC void make_empty(void);
 */

#define STACK_SIZE 100

static int contents[STACK_SIZE];
static int top = 0;

static void terminate(const char *message)
{
    printf("%s\n",message);
    exit(EXIT_FAILURE);
}

void make_empty(void)
{
    top  = 0;
}

bool is_empty(void){
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(int i)
{
    if(is_full())
        terminate("Error in push: stack is full");
    contents[top++] = i;
}

int pop(void)
{
    if(is_empty())
        terminate("Error is pop: stack is empty");
    return contents[--top];
}
