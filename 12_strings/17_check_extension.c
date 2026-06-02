#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


bool test_extension(const char *file_name, const char *extensions);

int main(int argc, char *argv[])
{
    printf("The result is %d\n", test_extension("hello.txt", "PDF"));
    return 0;
}

bool test_extension(const char *file_name, const char *extension)
{
    char buffer[100];
    int i = 0;

    while(*file_name++)
        if(*file_name == '.')
            break;

    if(*file_name != '.')
        return false;

    while(*file_name++)
        buffer[i++] = toupper(*file_name);

    buffer[i] = '\0';

    return strcmp(file_name, buffer) == 0;
}
