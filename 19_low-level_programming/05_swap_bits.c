#include <stdio.h>

unsigned short swap_bytes(unsigned short i);
unsigned short swap_bytes_one_st(unsigned short i);

int main(void)
{
    unsigned short i, result;
    printf("Enter a hexadecimal number (up to four digits): ");
    scanf("%hx", &i);

    result = swap_bytes(i);
    printf("Number with bytes swapped: %hx\n", result);
    return 0;
}

unsigned short swap_bytes(unsigned short i)
{
    unsigned short result, x, y;
    x = i & (((unsigned short)1 << 8) - 1);
    y = (i & ((((unsigned short)1 << 8) - 1) << 8)) >> 8;

    x ^= y;
    y ^= x;
    x ^= y;

    result = x;
    result = result | (y << 8);
    return result;
}

unsigned short swap_bytes_one_st(unsigned short i)
{
    return i << 8 | i >> 8;
}

unsigned short swap_bytes_king(unsigned short i)
{
    unsigned short high_byte = i << 8;
    unsigned short low_byte = i >> 8;
    return high_byte | low_byte;
}
