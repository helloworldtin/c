#include <stdio.h>

int fact(int n);

int main(void)
{
    int res = fact(3);
    printf("The factorial of 3 is %d\n", res);
    return 0;
}

int fact(int n){
    if(n <= 1) return 1;
    return n * fact(n - 1);
}
//  f(x) = n * f(x - 2);
