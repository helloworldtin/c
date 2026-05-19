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

    for(unsigned int i = 0; i < N; i++){
        if(a[i] > *max){
            *max = a[i];
        }

        if(a[i] < *min){
            *min = a[i];
        }
    }
}
