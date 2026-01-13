/* The value of the mathematical constant e can be expressed as infinite series
    e = 1/1! + 1/2! + 1/3! + ...
    what the program that approximarte the value of e =   e = 1/1! + 1/2! + 1/3! + ... + 1/n!;
    n is the valu of enter by the user
*/

#include <stdio.h>

int main(void){
    int n;
    printf("Enter up to you want to find the value of e: ");
    scanf("%d",&n);

    float e = 2;
    for(int i = 2; i <= n; i++){
        float fact_val = 1.0;

        for(int j = 2; j<=i; j++){
            fact_val *= j;
        }

        e += 1.0/fact_val;
    }
    printf("The approx vallue of e is %f\n", e);
    return 0;
}
