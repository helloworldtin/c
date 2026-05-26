#include <stdio.h>
#include <stdbool.h>

#define N 5

bool search(const int a[], int n, int key);

int main(void)
{
    int arr[N] = {1,2,3,4,5};
    printf("The key 3 is %d in the array where 0 is not present and 1 is present\n", search(arr, N, 3));
    return 0;
}

bool search(const int a[], int n, int key)
{
    const int* p;
    for(p = a; p < a + n; p++){
        if(*p == key){
            return true;
        }
    }
    return false;
}
