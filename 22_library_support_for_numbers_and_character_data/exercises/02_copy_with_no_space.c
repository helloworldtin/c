#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) {
    bool noblank_seen = false;
    int ch;

    while((ch = getchar()) != EOF) {
        if(noblank_seen)
            putchar(ch);
        else if(!isspace(ch)) {
            noblank_seen = true;
            putchar(ch);
        }
        if(ch == '\n')
            noblank_seen = false;
    }
    return 0;
}
