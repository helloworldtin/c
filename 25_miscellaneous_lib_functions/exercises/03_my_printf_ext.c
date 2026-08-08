#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

void print_number(int n)
{
    if(n < 0) {
        putchar('-');
        n = -n;
    }

    if(n / 10) {
        print_number(n / 10);
    }

    putchar(n % 10 + '0');
}

void my_printf(const char *fmt, ...)
{
    int current_value_int;
    char *current_value_str;

    va_list ap;
    va_start(ap, fmt);

    while(*fmt) {
        if(*fmt == '%') {
            fmt++;
            if(*fmt == 'd') {
                current_value_int = va_arg(ap, int);
                print_number(current_value_int);
            }else if(*fmt == 's') {
                current_value_str = va_arg(ap, char *);
                while(*current_value_str) {
                    putchar(*current_value_str);
                    current_value_str++;
                }
            }else {
                putchar('%');
                continue;
            }
        }else {
            putchar(*fmt);
        }
        fmt++;
    }

    va_end(ap);
}

int main(void)
{
    my_printf("My name is %s and I am %d years old and got %d% in c\n", "sushil", 25, -12);
    return 0;
}
