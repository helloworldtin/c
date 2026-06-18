#include <stdlib.h>

int compare(const void* p, const void* q);

int main(void)
{
    int arr[100];
    qsort(&arr[50], 50,sizeof(arr[0]), compare);
    return 0;
}
