#include <stdbool.h>
#include <stdio.h>

#define N 7
#define M 24

int find_largest(const int *arr, int n);
void print_highest_temperature_of_week(int temperatures[N][M]);

int main(void)
{

    int temperatures[N][M] = {
        {30, 31, 3, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 31, 55, 33},
        {28, 29, 30, 31, 2, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 2},
        {25, 26, 27, 28, 29, 30, 31, 2, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48},
        {20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 2, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43},
        {15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 2, 33, 34, 35, 36, 37, 38},
        {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 2, 33},
        {5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 2}
    };

    print_highest_temperature_of_week(temperatures);

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

void print_highest_temperature_of_week(int temperatures[N][M])
{
    int (*temp_ptr)[M];
    for(temp_ptr = temperatures; temp_ptr < temperatures + N; temp_ptr++){
        int largest_value = find_largest(temp_ptr[0], M);
        printf("The largest temperature of week is %d\n",largest_value);
    }
}
