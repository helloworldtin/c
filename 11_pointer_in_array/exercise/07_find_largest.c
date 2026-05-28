#include <stdio.h>

int find_largest(const int *arr, int n);

int main(void)
{
    const int n = 3;
    int arr[n] = {1,2,3};

    int largest_element = find_largest(arr, n);
    printf("The largest element in the array is %d\n", largest_element);
    return 0;
}

int find_largest(const int *arr, int n)
{
    int largest = *arr;
    const int *ptr;

    for(ptr = arr + 1; ptr < arr + n; ptr++){
        if(*ptr > largest){
            largest = *ptr;
        }
    }
    return largest;
}
