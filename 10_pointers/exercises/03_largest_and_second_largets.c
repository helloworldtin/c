#include <stdio.h>

#define N 10

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void)
{
    int largest, second_largest;
    int a[N];

    printf("Enter 10 numbers: ");
    for(unsigned int i = 0; i < N; i++){
        scanf(" %d", &a[i]);
    }
    find_two_largest(a, N, &largest, &second_largest);

    printf("The largest element is %d and second largest element is %d\n", largest,second_largest);
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    *largest = a[0];
    *second_largest = *largest;

    for(int i = 0; i < n; i++){
       if(a[i] > *largest){
           *second_largest = *largest;
           *largest = a[i];
       }
    }
}
