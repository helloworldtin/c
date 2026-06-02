#include <stdio.h>
#include <ctype.h>

void capitalize( char str[]);
void capitalize_pointer( char* ptr);

int main(int argc, char* argv[])
{
    char str[] = "hello world";
    capitalize_pointer(str);
    puts(str);
}

void capitalize(char str[])
{
    int i;
    for(int i = 0; str[i] != '\0'; i++){
        str[i] = toupper(str[i]);
    }
}

void capitalize_pointer(char *str)
{
    while(*str++)
        *str = toupper(*str);
}
