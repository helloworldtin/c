#include <math.h>
#include <stdio.h>

double evaluate_polynomial(double a[], int n, double x)
{
    double result = a[0];

    for(int i = 1; i <= n; i++) {
        result = fma(result, x, a[i]);
    }

    return result;
}

int main(void)
{
    double a[] = {2, -5, 7, -1};
    double y = evaluate_polynomial(a, 3, x);
    printf("The evaluated expression is %lf\n", y);
    
    return 0;
}
