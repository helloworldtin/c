#include <stdio.h>
#include <stdlib.h>

#define N 10

int compare(const void* p, const void* q)
{
    int p_cpy = *(int *)p;
    int q_cpy = *(int *)q;

    return q_cpy - p_cpy;
}


int main(void)
{
    int arr[N] = {1,2,3,4,5,6,7,8,9,10};
    qsort(arr, N, sizeof(arr[0]), compare);

    for(int i = 0; i < N; i++){
        printf("%d ", arr[i]);
    }
    putchar('\n');
}
