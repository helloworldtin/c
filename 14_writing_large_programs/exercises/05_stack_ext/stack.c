#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define SIZE 100

double contents[SIZE];
int size = 0;
int top = 0;
void push(double value)
{
    if(top == SIZE){
        printf("Expression is too complex that this program can't handle\n");
        exit(EXIT_FAILURE);
    }
    contents[size++] = value;
    top++;

}

double pop(void){
    if(top < 1){
       printf("Not enough operands in expression\n");
       exit(EXIT_FAILURE);
    }
    double value = contents[--top];
    size--;
    return  value;

}
