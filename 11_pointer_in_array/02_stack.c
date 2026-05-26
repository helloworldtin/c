#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define N 100

int size = 0;

int stack[N];
int *top_ptr = &stack[0];

bool is_empty();
bool is_full();

void push(int el);
int pop();
void print_stack();

int main(void)
{
    push(34);
    push(60);
    push(50);
    pop();
    print_stack();
}

void push(int el){
    if(is_full()){
        printf("The stack is full\n");
        exit(EXIT_FAILURE);
    }else{
       *top_ptr++ = el;
        size++;
    }
}

int pop()
{
    if(is_empty()){
        printf("The stack is empty\n");
        exit(EXIT_FAILURE);
    }
    size--;
    return *--top_ptr;
}

void print_stack()
{
    for(int i = 0; i < size; i++){
        printf("%d ", stack[i]);
    }
    printf("\n");
}

bool is_empty()
{
    return top_ptr == &stack[0];
}

bool is_full()
{
    return top_ptr > &stack[N - 1];
}
