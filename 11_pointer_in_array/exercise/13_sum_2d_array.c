#include <stdio.h>

#define  LEN 3

int sum_two_dimensional_array(const int a[][LEN], int n);
int sum_two_dimensional_array_ptr(const int a[][LEN], int n);

int main(void)
{
    const int n = 3;

    int matrix[n][LEN] = {
        {1,1,1},
        {1,1,1},
        {1,1,1},
    };

    int val1 = sum_two_dimensional_array(matrix, n);
    int val2 = sum_two_dimensional_array_ptr(matrix, n);

    printf("The sum is %d using subscription and %d using pointer\n", val1, val2);
    return 0;
}

int sum_two_dimensional_array(const int a[][LEN], int n)
{
    int i, j, sum = 0;

    for(i = 0; i < n; i++){
        for(j = 0; j < LEN; j++){
            sum += a[i][j];
        }
    }

    return sum;
}

int sum_two_dimensional_array_ptr(const int a[][LEN], int n)
{
    const int *ptr;
    int sum = 0;

    for(ptr = &a[0][0]; ptr <= &a[n - 1][LEN - 1]; ptr++){
        sum += *ptr;
    }

    return sum;
}
