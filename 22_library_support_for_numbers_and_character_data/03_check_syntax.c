#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char *p;
    char *str = "1hello_world";

    if(!isalpha(*str) && *str != '_') {
        fprintf(stderr, "first char must underscore or alphabet letter\n");
        return -1;
    }

    for(p = str + 1; *p != '\0'; p++) {
        if(!isalnum(*p) && *p != '_') {
            fprintf(stderr, "invlaid idendifer\n");
            return -1;
        }
    }

    printf("Valid c idendifer\n");
    
    return 0;
}
        
