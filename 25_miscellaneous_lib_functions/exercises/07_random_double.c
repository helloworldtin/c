#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double random_double()
{
    srand(time(NULL));
    int rand_value = rand() % 11;
    return rand_value / 10.0;
}

int main(void)
{
    double res = random_double();
    while(res != 1.0)
        res = random_double();
    
    printf("%.1lf\n", res);
}
