#include <stdlib.h>
#include <stdio.h>

void *my_alloc(size_t size);

int main(void)
{
    int *arr;
    arr = my_alloc(10 * sizeof(*arr));

    for (int i = 0; i < 10; i++) {
        arr[i] = 10;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}

void *my_alloc(size_t size)
{
    void *ptr = malloc(size);

    if(ptr == NULL){
        printf("Error: Unable to allocate that much memory\n");
        exit(EXIT_FAILURE);
    }
    return ptr;
}
