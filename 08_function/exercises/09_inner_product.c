// Write the following function:
// double inner product (double a [], double b [ l , int n) ;
// The function should return a [0] * b [0] + a [1] * b[1] + . . . + a [ n - 1 ] * b [ n - 1 ] .

#include <stdio.h>

#define N 5
double inner_product(double a[], double b[], int n);

int main(void)
{
    double a[] = {1,2,3,4,5};
    double b[] = {6,7,8,9,10};
    double res = inner_product(a, b, N);

    printf("The res is %lf\n", res);
    return 0;
}

double inner_product(double a[], double b[], int n){
    double sum = 0;

    for(int i = 0; i < n; i++){
        double product = a[i] * b[i];
        sum += product;
    }

    return sum;
}
