#include <ctype.h>
#include <math.h>
#include <stdio.h>

double round_nearest(double x)
{
    return x < 0.0 ? ceil(x - 0.5) : floor(x + 0.5);
}

double round_nearest(double x, double n)
{
    double power = pow(10.0, n);

    if(x < 0.0)
        return ceil(x * power - 0.5) / power;
    else
        return floor(x * power + 0.5) / power;
}

int main(void)
{
    float res = round_nearest(3.14159f,  3);
    printf("%f\n", res);
    return 0;
}
