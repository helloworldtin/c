#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int i = 0, j = 100;
    swap(&i, &j);
    printf("The value of i = %d and j = %d\n", i , j);
    return 0;
}
