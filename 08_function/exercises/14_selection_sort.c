// Write a program that asks the user to enter a series of integers (which it stores in an array).
// then sorts the integers by calling the function selection_ sort. When given an array
// with n elements, selection_sort must do the following:
// 1. Search the array to find the largest element, then move it to the last position in the array.
// 2. Call itself recursively to sort the first n - 1 elements of the array.


#include <stdio.h>

void selection_sort(int arr[], int n);

void swap(int arr[], int i, int j);

int main(void)
{
    int n;
    printf("Enter the number of series you want: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the series of numbers: ");

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    selection_sort(arr, n);


    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    putchar('\n');
    return 0;
}

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void selection_sort(int arr[], int n)
{
    if(n == 1) return;

    int max_el_index = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] > arr[max_el_index]){
            max_el_index = i;
        }
    }

    swap(arr, max_el_index, n - 1);
    selection_sort(arr, n - 1);
}
