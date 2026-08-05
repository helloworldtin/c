#include <assert.h>
#include <stdio.h>


void change_value(double *value)
{
    assert(value != NULL);
    *value = 100;
}

int main(void)
{
    double value = 9834.94;
    printf("The value before %.2f\n", value);

    change_value(&value);
    printf("The value before %.2f\n", value);

    // here will will hit assert
    change_value(NULL);
    
    return 0;
}
