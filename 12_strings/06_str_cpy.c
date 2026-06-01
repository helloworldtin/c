#include <stdio.h>

char *strcat(char *s1, const char *s2);
char *strcat2(char *s1, const char *s2);

int main(void)
{
    char letter[100] = "hello";
    strcat2(letter, " world");

    puts(letter);
    return 0;
}

char *strcat(char *s1, const char *s2)
{
    char *p = s1;

    while(*s1)
        s1++;

    while(*s2){
        *s1++ = *s2++;
    }

    *s1 = '\0';
    return p;
}

char *strcat2(char *s1, const char *s2)
{
    char *p =s1;

    while(*p)
        p++;

    while((*p++ = *s2++))
        ;
    return s1;
}
