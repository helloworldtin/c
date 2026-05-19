#include <stdio.h>

int *max(int *a, int *b);

int main(void)
{
    int *p;
    int a = 10;
    int b = 100;

    p = max(&a, &b);

    printf("The max is %d\n", *p);
    return 0;
}

int *max(int *a, int *b)
{
    if(*a > *b)
        return a;
    return b;
}
