typedef struct {
    double real;
    double imaginary;
} Complex;

Complex c1, c2, c3;

Complex make_complex(double real, double imaginary)
{
    Complex result = {.real = real, .imaginary = imaginary};
    return result;
}

Complex add_complex(Complex c1, Complex c2)
{
    Complex result = {.real = c1.real + c2.real, .imaginary = c1.imaginary + c2.imaginary};
    return result;
}

// king way;
typedef struct {
    double real, imaginary;
} Complex2;

Complex2 c21, c22, c32;

Complex2 make_complex_2(double real, double imaginary)
{
    Complex2 c;
    c.real = real;
    c.imaginary = imaginary;

    return c;
}

Complex2 add_complex_2(Complex2 c1, Complex2 c2)
{
    Complex2 c;

    c.real = c1.real + c2.real;
    c.imaginary = c1.imaginary + c2.imaginary;

    return c;
}
