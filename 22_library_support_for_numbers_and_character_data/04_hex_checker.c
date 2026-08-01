#include <ctype.h>
#include <stdio.h>

long int check_hex(const char *str)
{
    const char *p;
    long int res;
    for(p = str; *p != '\0'; p++) {
        if(!isxdigit(*p)) {
            return -1;
        }
    }

    sscanf(str, "%lx", &res);
    return res;
}

int main(void)
{
    long int res = check_hex("FF22A");
    printf("%ld\n", res);
    return 0;
}
