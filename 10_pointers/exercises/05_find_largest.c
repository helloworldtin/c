#include <stdio.h>


int *find_largest(int a[], int n);

int main(void)
{
    const int n = 4;
    int a[n] = {1,2,4,5};

    int *largest_el_ptr = find_largest(a, n);

    printf("The largest element is %d\n", *largest_el_ptr);

    return 0;
}

int *find_largest(int a[], int n)
{
    int *largest_ptr = a;

    for(int i = 0; i < n; i++){
        if(*largest_ptr < a[i]) largest_ptr = &a[i];
    }

    return largest_ptr;
}
