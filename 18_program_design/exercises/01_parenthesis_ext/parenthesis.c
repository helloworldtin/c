#include <stdbool.h>
#include <stdio.h>
#include "stack.h"

#define  STACK_SIZE 100

int main(void)
{
    Stack stack = create(STACK_SIZE);
    printf("Enter parentheses and/or braces: ");
    char ch = getchar();

    while(ch != '\n'){
        if(ch == '(' || ch == '{' || ch == '['){
            push(stack,ch);
        }else if(ch == ')' || ch == '}' || ch == ']'){
            pop(stack);
        }else{
            printf("Invalid parentheses.\n");
            return -1;
        }
        ch = getchar();
    }

    if(is_empty(stack)){
        printf("parentheses/braces are properly nested\n");
    }else {
        printf("They are not nested correctly.\n");
    }
  return 0;
}
