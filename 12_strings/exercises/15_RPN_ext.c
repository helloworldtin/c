#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 100
#define ASCII_DIFF 48

double contents[SIZE];
int size = 0;
int top = 0;

void push(double val);
double pop(void);
int char_to_number(char ch);
int evaluate_RPN_expression(const char *expression);

int main(void)
{
    char expression[] = "1 2 3 + + =";
    printf("The evaluate expression value is %d\n", evaluate_RPN_expression(expression));
    return 0;
}

/*****************************************************
 * push: This is used to push element in the concent *
 *       array or stack for us.                      *
 *****************************************************/
void push(double value)
{
    if(top == SIZE){
        printf("Expression is too complex that this program can't handle\n");
        exit(EXIT_FAILURE);
    }
    contents[size++] = value;
    top++;

}

/*****************************************************
 * push: This is used to pop element from the concent *
 *       array or stack for us.                       *
 *****************************************************/
double pop(void){
    if(top < 1){
       printf("Not enough operands in expression\n");
       exit(EXIT_FAILURE);
    }
    double value = contents[--top];
    size--;
    return  value;

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
 * evaluate_RPN_expression: This is used to evaluate the           *
 *       the final result using pop ans push.        *
 *****************************************************/

int evaluate_RPN_expression(const char *expression)
{
    /* clean the stack size */
    top = 0;
    size = 0;

    while(*expression){
        if(*expression == ' '){
            expression++;
            continue;
        }

        if(*expression >= '0' && *expression <= '9'){
             push(char_to_number(*expression));
             expression++;
             continue;
         }
         // operands
         double first_o;
         double second_o;

         switch (*expression) {
             case '+':
                 first_o = pop();
                 second_o = pop();
                 push(first_o + second_o);
                 break;

             case '-':
                 first_o = pop();
                 second_o = pop();
                 push(first_o - second_o);
                 break;

             case '*':
                 first_o = pop();
                 second_o = pop();
                 push(first_o * second_o);
                 break;

             case '/':
                 first_o = pop();
                 second_o = pop();
                 push(first_o / second_o);
                 break;

             case '=':
                 return pop();

             default:
                 printf("Thanks for using this program\n");
                 return -1;
         }
        expression++;
    }
    return -1;
}
