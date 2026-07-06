#include <stdio.h>

unsigned int rotate_left(unsigned int i, int n);
unsigned int rotate_right(unsigned int i, int n);

int main(void)
{
    int result = rotate_left(0x12345678, 4);
    printf("The result is %x\n", result);
    return 0;
}

unsigned int rotate_left(unsigned int i, int n)
{
    return i << n;
}

unsigned int rotate_right(unsigned int i, int n)
{
    return i >> n;
}
