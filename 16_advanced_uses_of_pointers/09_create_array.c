#include <stdio.h>
#include <stdlib.h>


int *create_array(int n, int initial_value)
{
    int *array;

    array = malloc(n * sizeof(int));

    if(array == NULL)
        return NULL;

    for(int i = 0; i < n; i++){
        array[i] = initial_value;
    }

    return array;
}

int main(void)
{
    int *array = create_array(10, 7);

    for(int i = 0; i < 10; i++){
        printf("%d\n", array[i]);
    }
    return 0;
}
