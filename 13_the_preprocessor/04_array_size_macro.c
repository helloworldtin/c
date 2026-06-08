#include <stdio.h>

#define NELEMS(a) ((sizeof(a))/(sizeof(a[0])))

int main(void)
{
    int a[] = {1,2,3,4};
    printf("The size of the array is %zu\n", sizeof(a));
    printf("The number of element in  array a is %zu\n", NELEMS(a));

    return 0;
}
