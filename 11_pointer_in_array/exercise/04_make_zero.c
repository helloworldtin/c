#include <stdio.h>

void store_zeroes(int a[], int n);
void store_zeroes_pointer(int a[], int n);

int main(void)
{
    const int n = 3;
    int a[] = {1,2,3};

    store_zeroes_pointer(a, n);

    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    putchar('\n');

    return 0;
}

void store_zeroes(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        a[i] = 0;
}

void store_zeroes_pointer(int a[], int n)
{
    int *ptr;
    for(ptr = a; ptr < a + n; ptr++)
        *ptr = 0;
}
