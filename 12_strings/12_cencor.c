#include <stdio.h>

#define N 10

void censor_by_king(char s[]);

int main(int argc, char *argv[])
{
    char str2[] = "foofoo fooloofoo";

    censor_by_king(str2);
    puts(str2);
    return 0;
}

void censor_by_king(char s[])
{
    int i;

    for(i = 0; s[i] != '\0'; i++){
        if(s[i] == 'f' && s[i + 1] == 'o' && s[i + 1] == 'o'){
            s[i] = s[i + 1] = s[i + 2] = 'x';
        }
    }
}
