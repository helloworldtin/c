#include <ctype.h>
#include <stdio.h>

int main(void) {
    int ch;

    while((ch = getchar()) != EOF) {
        if(iscntrl(ch)) {
            if(ch == '\n')
                putchar(ch);
            else
                putchar('?');
        }else {
            putchar(ch);
        }
    }
}
