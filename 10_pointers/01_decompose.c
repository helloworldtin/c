#include <stdio.h>

void decompose(double x, long *int_part, double *frac_part);

int main(void)
{

}

void decompose(double x, long *int_part, double *frac_part)
{
    *int_part = (long) x;
    *frac_part = x - *int_part;
}
