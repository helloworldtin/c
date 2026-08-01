#include <math.h>
#include <stdio.h>

int main(void)
{
    double principal_amount, rate, compound_amount;
    int years;
    
    printf("Hello how are you doing let's calculate your compound amount\n");
    printf("Please enter your principal Amount$: ");
    scanf("%lf", &principal_amount);

    printf("\nThank you\nNow please enter in what rate amount is kept in: ");
    scanf("%lf", &rate);

    printf("\nLast one\nFor how many years: ");
    scanf("%d", &years);

    compound_amount = principal_amount * exp((rate/100)*years);

    printf("Your compunded amount is $%.2f\n", compound_amount);
    
    return 0;
}
