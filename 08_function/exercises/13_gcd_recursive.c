// Write a recursive version of the ged function (see Exercise 3). Here's the strategy to use for
// computing god (m, n): If n is 0, return m. Otherwise, call ged recursively, passing n as
// the first argument and m% n as the second.

#include <stdio.h>

int gcd(int m, int n);

int main(void)
{
    int gcd_res = gcd(4, 2);
    printf("The gcd is %d\n", gcd_res);
    return 0;
}

int gcd(int m, int n)
{
    if(n == 0) return m;
    return gcd(n, m % n);
}
