#include <limits.h>
#include <stdio.h>

#define N 10

void max_min(int a [] , int n, int *max, int *min);


int main(void)
{
    int a[N] = {1,2,4,0,4,5,6,6,8,1};
    int min;
    int max;

    max_min(a, N, &max, &min);
    printf("The min value of array is %d and max value is %d\n", min, max);
    return 0;
}

void max_min(int a[], int n, int *max, int *min)
{
    *min = INT_MAX;
    *max = INT_MIN;
    int *ptr = a;

    for(ptr = &a[0]; ptr <= &a[n - 1]; ptr++){
        if(*ptr > *max){
            *max = *ptr;
        }

        if(*ptr < *min){
            *min = *ptr;
        }
    }
}
