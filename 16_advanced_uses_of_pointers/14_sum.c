#include <stdio.h>

#define  PRINT_INT(x) printf("%d\n", x)

int sum(int (*f) (int), int start, int end);

int g(int n){
    return n*n;
}

int main(void)
{
    int sum_max = sum(g, 0, 100);
    PRINT_INT(sum_max);
    return 0;
}

int sum(int (*f) (int), int start, int end)
{
    int i, sum = 0;
    for(i = start; i <= end; i++){
        sum += f(i);
    }

    return sum;
}
