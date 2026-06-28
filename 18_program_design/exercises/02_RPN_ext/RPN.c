#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define SIZE 100
#define ASCII_DIFF 48

struct stack_type  {
    Item *contents;
    int top;
    int size;
};

int char_to_number(char ch);
void print_result(Stack s);

int main(void)
{
    Stack s = create(SIZE);
    for(;;){
        print_result(s);
    }
    destroy(s);
    return 0;
}

/********************************************************
 * char_to_number: This is used to convert the number   *
 *                 from the character using ascii.      *
 ********************************************************/
int char_to_number(char ch)
{
    return ch - ASCII_DIFF;
}

/*****************************************************
 * print_result: This is used to print the           *
 *       the final result using pop ans push.        *
 *****************************************************/
void print_result(Stack s)
{
    s->top = 0;
    s->size = SIZE;
    /* Cleaning the stack. */
    char ch;
    printf("Enter the RPN expression: ");

    for(;;){
        scanf(" %c", &ch);

        if(ch >= '0' && ch <= '9'){
            push(s, char_to_number(ch));
            continue;
        }
        // operands
        double first_o;
        double second_o;

        switch (ch) {
            case '+':
                first_o = pop(s);
                second_o = pop(s);
                push(s, first_o + second_o);
                break;

            case '-':
                first_o = pop(s);
                second_o = pop(s);
                push(s, first_o - second_o);
                break;

            case '*':
                first_o = pop(s);
                second_o = pop(s);
                push(s,first_o * second_o);
                break;

            case '/':
                first_o = pop(s);
                second_o = pop(s);
                push(s,first_o / second_o);
                break;

            case '=':
                printf("Value of the RPN expression is %.2f\n", pop(s));
                return;

            default:
                printf("Thanks for using this program\n");
                exit(EXIT_SUCCESS);
        }

    }
    exit(EXIT_FAILURE);
}
