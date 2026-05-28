#include <stdio.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(void)
{
    int largest, second_largest;

    const int n = 3;
    int arr[n] = {1,2,3};

    find_two_largest(arr, n, &largest, &second_largest);

    printf("The largest element in the array is %d and second largest is %d\n", largest, second_largest);
    return 0;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    *largest = *a;
    *second_largest = *largest;

    const int *ptr;

    for(ptr = a + 1; ptr < a + n; ptr++){
        if(*ptr > *largest){
            *second_largest = *largest;
            *largest = *ptr;
        }else if(*ptr < *largest && *ptr > *second_largest){
            *second_largest = *ptr;
        }
    }
}
