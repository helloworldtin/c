#include <stdio.h>

int sum_array(const int a[], int n)
{
    int i, sum;

    for(i = 0; i < n; i++){
        sum += a[i];
    }

    return sum;
}

int sum_array_k(const int a[], int n)
{

    int sum = 0;
    const int *p;
    for (p = a; p < a + n; p++)
        sum += *p;
    return sum;
}

/* Pointer version */
int sum_array_pointer(const int a[], int n)
{
    int sum = 0;
    int temp = n - 1;
    while(temp >= 0){
        sum += *a;
        a++;
        temp--;
    }

    return sum;
}

int main(void)
{
    const int n = 3;
    int arr[n] = {1,2,3};
    int ans = sum_array_pointer(arr, n);
    printf("The sum is %d\n", ans);
    return 0;
}
