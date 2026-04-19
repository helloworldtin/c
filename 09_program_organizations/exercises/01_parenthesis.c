#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


#define STACK_SIZE 100

// External Variables
char contents[STACK_SIZE];
int top = 0;


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

void stack_overflow(void)
{
    printf("Stack is full remove some item to push here.\n");
    exit(-1);
}

void stack_underflow(void)
{
    printf("Stack is empty remove add some element.\n");
    exit(-1);
}

void push(int i)
{
    if(is_full())
       stack_overflow();
    else
      contents[top++] = i;
}

int pop(void){
    if(is_empty())
    {
        stack_underflow();
        return -1;
    }
    else
        return contents[--top];
}

int main(void)
{
  printf("Enter parentheses and/or braces: ");
  char ch = getchar();

  while(ch != '\n'){
    if(ch == '(' || ch == '{' || ch == '['){
      push(ch);
    }else if(ch == ')' || ch == '}' || ch == ']'){
      pop();
    }else{
      printf("Invalid parentheses.\n");
      return -1;
    }
    ch = getchar();
  }

  if(is_empty()){
      printf("parentheses/braces are proery netsted\n");
   }else {
     printf("They are not nested correctly.\n");
   }
  return 0;
}
