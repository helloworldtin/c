#include <stdio.h>

int count_spaces_pointer(const char *s)
{
    int count = 0;

    for(; *s != '\0'; s++)
        if(*s == ' ')
            count++;

    return  count;

}

int count_spaces_while(const char *s)
{
    int count = 0;
    while(*s++)
        if(*s == ' ') count++;

    return count;

}
int main(int argc, char *argv[])
{

    char *str = "hello there is";
    int res = count_spaces_while(str);
    printf("The res is %d\n", res);
    return 0;
}
