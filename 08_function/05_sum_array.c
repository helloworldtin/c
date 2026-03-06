#include <stdio.h>

#define LEN 5

int sum_array(int a[], int n);

int main(void)
{
    int a[LEN] = {1,2,3,4,5};
    int res = sum_array(a, LEN);
    printf("The result is %d\n",res);
}

int sum_array(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    return sum;
}
