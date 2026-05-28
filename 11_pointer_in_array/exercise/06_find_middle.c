#include <stdio.h>

int find_middle(const int *a, int n);

int main(void)
{
    const int n = 3;
    int arr[n] = {1,2,3};

    int middle_value = find_middle(arr, n);

    printf("The middle value is %d\n",middle_value);
    return 0;
}

int find_middle(const int *a, int n)
{
    const int *middle = a + ((a + (n - 1) - a)) / 2;
    return *middle;
}
