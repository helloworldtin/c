#include <stdio.h>

#define LINE(c) "Line " #c " of file " __FILE_NAME__
#define FILE_NAME(c) LINE(c)

#define LINE_FILE FILE_NAME(__LINE__)


int main(void)
{
    char *hello = LINE_FILE;
    puts(hello);

    char *happen = LINE_FILE;
    puts(happen);

    return 0;
}
