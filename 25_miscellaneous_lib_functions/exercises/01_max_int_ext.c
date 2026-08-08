#include <stdio.h>
#include <stdarg.h>

int max_int(int n, ...)
{
    va_list ap;
    int max_el, current;
    
    va_start(ap, n);
    current = va_arg(ap, int);
    if(current == 0) {
        return n;
    }
    
    if(current > n) {
        max_el = current;
    }else {
        max_el = n;
    }

    for( ;; ) {
        current = va_arg(ap, int);
        if(current == 0) {
            break;
        }
        if(current > max_el) {
            max_el = current;
        }
    }

    va_end(ap);
    return max_el;
}

int main(void)
{
    int max_el = max_int(4, 0);
    printf("The max el is %d\n", max_el);
    return 0;
}

