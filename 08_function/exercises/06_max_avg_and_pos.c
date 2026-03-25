// Write functions that return the following values. (Assume that a and n are parameters,
// where a is an array of int values and n is the length of the array.)
// (a) The largest element in a.
// (b) The average of all elements in a.
// (c) The number of positive elements in a.


#include <stdio.h>
#define N 10

int find_max_element(int arr[], int n);

float calculate_average(int arr[], int n);

int positive_max_count(int arr[], int n);


int main(void)
{
    int arr[N] = {1,2,4,4,4,-19,9, 9 ,-4, -10};

    int max_el = find_max_element(arr, N);
    float average = calculate_average(arr, N);
    int positive_count = positive_max_count(arr, N);

    printf("The max element is %d and the average is %f and positive count is %d\n", max_el, average, positive_count);

}

int find_max_element(int arr[], int n)
{
    if(n < 1) return -1;
    int max = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

float calculate_average(int arr[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    return (float)sum/n;
}

int positive_max_count(int arr[], int n)
{
    int pos_count = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            pos_count++;
        }
    }
    return pos_count;

}
