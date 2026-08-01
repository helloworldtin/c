#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void solve_quadratic_equation(double a, double b, double c, double *root1, double *root2)
{
    double under_root_value = pow(b, 2) - (4 * a * c);
    if(under_root_value < 0) {
        fprintf(stderr, "Sorry thisis complex number\n");
        exit(EXIT_FAILURE);
    }

    if(a == 0) {
        fprintf(stderr, "Undefined value\n");
        exit(EXIT_FAILURE);
    }

    *root1 = (-b + sqrt(under_root_value)) / (2 * a);
    *root2 = (-b - sqrt(under_root_value)) / (2 * a);
}

int main(void) {
    double a, b, c, root1, root2;

    printf("The the constant terms of equation a, b and c: ");
    scanf("%lf %lf %lf",&a, &b, &c);

    solve_quadratic_equation(a, b, c, &root1, &root2);

    printf("The roots of given equation is %.2f and %.2f\n", root1, root2);
    return 0;
}
