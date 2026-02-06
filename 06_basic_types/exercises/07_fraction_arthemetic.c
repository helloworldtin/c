// Modify Programming Project 6 from Chapter 3 so that the user may add, subtract, multiply,
// or divide two fractions (by entering either +, -, *, or / between the fractions).

#include <stdio.h>
int main(void){

    int numerator1,numerator2,deno1,deno2;
    printf("Enter the expression: ");

    char operation_symbol;
    scanf("%d/%d %c %d/%d",&numerator1,&deno1,&operation_symbol,&numerator2,&deno2);

    double ans;
    switch (operation_symbol) {

        case '+':
           ans = (double)numerator1 / deno1 + (double)numerator2 / deno2;
           break;
        case '-':
            ans = (double)numerator1 / deno1 - (double)numerator2 / deno2;
            break;
        case '*':
            ans = (double)numerator1 / deno1 * (double)numerator2 / deno2;
            break;
        case '/':
            ans = (double)numerator1 / deno1 / (double)numerator2 / deno2;
            break;
        default:
            printf("Invalid operation");
            return 0;
    }
    printf("The ans is %lf\n",ans);
    return 0;
}
