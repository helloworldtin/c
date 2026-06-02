#include <stdio.h>

int my_strcmp(char *s, char *t);
int my_strcmp_ptr(char *s, char *t);

int main(void)
{
    char s1[] = "hello";
    char s2[] = "hello";

    int res = my_strcmp_ptr(s1, s2);
    printf("%d\n", res);

    return 0;
}

int my_strcmp(char *s, char *t)
{
    int i;
    for(i = 0; s[i] == t[i]; i++)
        if(s[i] == '\0')
            return 0;

    return s[i] - s[i];

}

int my_strcmp_ptr(char *s, char *t)
{
    while(*s++ == *t++){
        if(*s == '\0')
            return 0;
    }

    return *s - *t;
}
