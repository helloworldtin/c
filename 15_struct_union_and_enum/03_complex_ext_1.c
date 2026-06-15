struct complex {
    double real;
    double imaginary;
};

struct complex c1, c2, c3;

struct complex make_complex(double real, double imaginary)
{
    struct complex result = {.real = real, .imaginary = imaginary};
    return result;
}

struct complex add_complex(struct complex number1, struct complex number2)
{
    struct complex result = { .real = number1.real + number2.real,
    .imaginary = number1.imaginary + number2.imaginary };

    return result;
}
