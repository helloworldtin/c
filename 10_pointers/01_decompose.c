#include <stdio.h>

void decompose(double x, long *int_part, double *frac_part);

int main(void)
{
    double x = 100.89;
    long int_part;
    double frac_part;

    decompose(x, &int_part, &frac_part);

    printf("The int part is %ld and frac part is %.2lf\n", int_part, frac_part);
}

void decompose(double x, long *int_part, double *frac_part)
{
    *int_part = (long) x;
    *frac_part = x - *int_part;
}
