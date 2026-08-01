#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool is_word = true;
    int ch;

    printf("I ran the program\n");
    while((ch = getchar()) != EOF) {
        
        if(is_word) {
            is_word = false;
            putchar(toupper(ch));
            continue;
        }
        
        if(ch == '\n' || ch == ' ') {
            putchar(ch);
            is_word = true;
            continue;
        }
            
        putchar(ch);
    }

    return 0;
}
