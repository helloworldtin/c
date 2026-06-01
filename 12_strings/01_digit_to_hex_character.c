#include <stdio.h>

char digit_to_hex_char(int digit)
{
    return "0123456789ABCDEF"[digit];
}

int main(void)
{
    char ch = digit_to_hex_char(15);
    printf("The 15th hex digit is %c\n", ch);
    return 0;
}
