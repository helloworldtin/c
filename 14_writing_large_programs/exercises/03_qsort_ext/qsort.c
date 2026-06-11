#include <stdio.h>
#include "quicksort.h"

#define N 10

int main(void)
{
    int a[N] = { 9 ,16, 4, 7, 8, 2, 4, 6, 6, 12 };
    quicksort(a, 0, N);

    for(int i = 0; i < N; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
