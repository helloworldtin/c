#include <stdbool.h>
#include <stdio.h>


#define STACK_SIZE 100

// External Variables
int contents[STACK_SIZE];
int top  = 0;


void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void stack_overflow()
{
    printf("Stack is full remove some item to push here.\n");
}

void stack_underflow()
{
    printf("Stack is empty remove add some element.\n");
}

void push(int i)
{
    if(is_full())
       stack_overflow();
    else
      contents[top++] = i;
}

int pop(){
    if(is_empty())
    {

        stack_underflow();
    return -1;
    }
    else
        return contents[--top];
}
