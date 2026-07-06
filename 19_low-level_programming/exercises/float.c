#include <stdio.h>

struct ieee_float {
    unsigned int fraction: 23;
    unsigned int exponent: 8;
    unsigned int sign: 1;
};

typedef union {
    float f;
    struct ieee_float bits;
} FloatUntion;


int main(void)
{
    FloatUntion x;

    x.bits.sign = 1;
    x.bits.exponent = 128;
    x.bits.fraction = 0;

    printf("%f\n", x.f);
    return 0;
}
