#include <stdio.h>
#include <stdarg.h>

void print_number(int n)
{
    if(n < 0) {
        putchar('-');
        n = -n;
    }

    if(n / 10) {
        print_number(n / 10);
    }
    putchar('0' + (n % 10));
}

void my_printf(const char *fmt, ...)
{
    int current_value;
    va_list ap;
    
    va_start(ap, fmt);

    while(*fmt) {
        if(*fmt == '%') {
            fmt++;
            if(*fmt == 'd') {
                current_value = va_arg(ap, int);
                print_number(current_value);
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
    my_printf("My age is %d and I code %d hour a day and I got %d% in math\n", 25, 12, 90);
    return 0;
}

