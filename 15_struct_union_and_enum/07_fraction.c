#include <stdio.h>

typedef  struct {
    int numerator;
    int denominator;
} Fraction;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// a. reduce
Fraction reduce(Fraction f)
{
    Fraction result;
    int divisor = gcd(f.numerator, f.denominator);

    result.numerator = f.numerator / divisor;
    result.denominator = f.denominator / divisor;

    return result;
}

Fraction add_fraction(Fraction f1, Fraction f2)
{
    Fraction result;
    result.numerator =(f1.numerator * f2.denominator) + (f1.denominator * f2.numerator);
    result.denominator = f1.denominator * f2.denominator;

    result = reduce(result);
    return result;
}

Fraction subtract_fraction(Fraction f1, Fraction f2)
{
    Fraction result;

    result.numerator =(f1.numerator * f2.denominator) - (f1.denominator * f2.numerator);
    result.denominator = f1.denominator * f2.denominator;

    return result;
}

Fraction multiply_fraction(Fraction f1, Fraction f2)
{
    Fraction result;

    result.numerator = f1.numerator * f2.numerator;
    result.denominator = f1.denominator * f2.denominator;

    return result;
}

Fraction divide_fraction(Fraction f1, Fraction f2)
{
    Fraction result;

    result.numerator = f1.numerator * f2.denominator;
    result.denominator = f1.denominator * f2.numerator;

    result = reduce(result);
    return result;
}

void print_fraction(Fraction f)
{
    printf("%d\n--\n%d\n", f.numerator, f.denominator);
}

int main(void)
{
    Fraction f;

    f = divide_fraction((Fraction){.numerator = 1, .denominator = 2}, (Fraction){.numerator = 1, .denominator = 2});
    print_fraction(f);
    return 0;
}
