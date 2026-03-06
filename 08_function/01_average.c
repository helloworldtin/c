#include <stdio.h>

double average(double a, double b)
{
    return (a + b) / 2;
}

int main()
{
    double x, y, z;

    printf("Enter the three numbers: ");
    scanf("%lg%lg%lg", &x, &y, &z);

    printf("Average of %lg and %lg: %lg\n",x, y, average(x, y));
    printf("Average of %lg and %lg: %lg\n",y, z, average(y, z));
    printf("Average of %lg and %lg: %lg\n",x, z, average(x, z));

    return 0;
}
