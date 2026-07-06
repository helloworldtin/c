#include <stdio.h>

int count_ones_loop(unsigned char ch);
int count_ones(unsigned char ch);

int main(void)
{
    int res = count_ones_loop('s');
    printf("The res is %d\n", res);

    res = count_ones('s');
    printf("The res is %d\n", res);
    return 0;
}

int count_ones_loop(unsigned char ch)
{
    int count = 0;
    for(int i = 0; i < sizeof(unsigned char) * 8; i++)
        if(ch & ((unsigned char)1 << i)) count += 1;

    return count;
}

int count_ones(unsigned char ch)
{
    if(ch == 0)
        return 0;
    return (ch & 1) + count_ones(ch >> 1);
}
