// Some calculators (notably those from Hewlett-Packard) use a system of writing mathemati-
// cal expressions known as Reverse Polish Notation (RPN). In this notation, operators are
// placed after their operands instead of between their operands. For example, 1 + 2 would be
// written 12 + in RPN, and 1 + 2 * 3 would be written 1 2 3 * +. RPN expressions can easily
// be evaluated using a stack. The algorithm involves reading the operators and operands in an
// expression from left to right, performing the following actions:
// When an operand is encountered, push it onto the stack.
// When an operator is encountered, pop its operands from the stack, perform the opera-
// tion on those operands, and then push the result onto the stack.
// Write a program that evaluates RPN expressions. The operands will be single-digit integers.
// The operators are +, - , *,/, and = The = operator causes the top stack item to be displayed;
// afterwards, the stack is cleared and the user is prompted to enter another expression. The
// process continues until the user enters a character that is not an operator or operand:
// E n t e r a n RPN e x p r e s s i o n : 1 2 3 * + =
// V a l u e o f e x p r e s s i o n : 7
// Enter an RPN expression: 5 8 * 4 9 - / =
// Va l u e o f e x p r e s s i o n : -8
// E n t e r an RPN e x p r e s s i o n : g
// If the stack overflows, the program will display the message Expression i s too com-
// p l e x and terminate. If the stack underflows (because of an expression such as 1 2 + +), the
// program will display the message Not enough operands in e x p r e s s i o n and termi-
// nate. Hints: Incorporate the stack code from Section 10.2 into your program. Use
// scanf (" &c", &ch) to read the operators and operands.

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
void print_result(void);

int main(void)
{
    for(;;){
        print_result();
    }
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
 * print_result: This is used to print the           *
 *       the final result using pop ans push.        *
 *****************************************************/
void print_result(void)
{
    /* Cleaning the stack. */
    top = 0;
    size = 0;

    char ch;
    printf("Enter the RPN expression: ");

    for(;;){
        scanf(" %c", &ch);

        if(ch >= '0' && ch <= '9'){
            push(char_to_number(ch));
            continue;
        }
        // operands
        double first_o;
        double second_o;

        switch (ch) {
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
                printf("Value of the RPN expression is %.2f\n", pop());
                return;

            default:
                printf("Thanks for using this program\n");
                exit(EXIT_SUCCESS);
        }

    }
    exit(EXIT_FAILURE);
}
