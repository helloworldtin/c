// Write a program that evaluates an expression:
// Enter an expression : 1+2.5*3
// fThe operands in the expression are floating-point numbers; the operators are +, - , *, and / .
// The expression is evaluated from left to right (no operator takes precedence over any other
// operator). expression : 10.5

#include <stdio.h>

int main(void){
    printf("Enter an expression: ");

    double current_value;
    char current_operand;
    double ans;
    scanf(" %lf",&ans);

    for (;;){
        if(current_operand == '\n') break;

        // get the operand
        current_operand = getchar();

        // ignoring white space in the expression.
        while(current_operand == ' ')  current_operand = getchar();
        if(current_operand == '\n') break;

        // get the current value;
        scanf("%lf", &current_value);

        switch (current_operand) {
            case '+':
                ans += current_value;
                break;
            case '-':
                ans -= current_value;
                break;
            case '*':
                ans *= current_value;
                break;
            case '/':
                ans /= current_value;
                break;
            default:
                printf("wrong expression\n");
                return 1;
        }

    }
    printf("Value of expression: %lf\n", ans);
    return 0;
}
