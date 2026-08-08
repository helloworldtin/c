#include <stdio.h>
#include <stdarg.h>

void display(int n, ...)
{
    va_list ap;
    int i;
    char *current_string;

    va_start(ap, n);

    for(i = 0; i < n; i++) {
        current_string = va_arg(ap, char *);
        printf("%s", current_string);
        putchar(' ');
    }

    putchar('\n');
    va_end(ap);
}

int main(void) {
    display(4, "Special", "Agent", "Dale", "Cooper");
    return 0;
}
