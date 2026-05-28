#include <stdio.h>

double inner_product(const double *a, const double *b, int n);

int main()
{
    const int n = 3;

    double a[n] = {1,2,3};
    double b[n] = {1,2,3};

    double ans = inner_product(a, b, n);
    printf("The inner produce of arr a and b is %lf", ans);
    return 0;
}

double inner_product(const double *a, const double *b, int n)
{
    const double *ptr1, *ptr2;
    double ans = 0;

    for(ptr1 = a, ptr2 = b; ptr1 < a + n; ptr1++,ptr2++){
        ans += *ptr1 * *ptr2;
    }

    return ans;
}
