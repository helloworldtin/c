#include <stdio.h>

unsigned int reverse_bits(unsigned int n);

int main(void)
{
    unsigned int res = reverse_bits(10);
    printf("%u\n", res);
    return 0;
}

unsigned int reverse_bits(unsigned int n)
{
    unsigned int bit, result = 0;
    for(int i = 0; i < sizeof(unsigned int) * 8; i++){
        bit = n & 1;
        result <<= 1;
        result |= bit;
        n >>= 1;
    }
    return result;
}
