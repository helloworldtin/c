#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension);

int main(int argc, char *argv[])
{
    char *file_name = "hello.png";
    char extension[100];

    get_extension(file_name, extension);
    puts(file_name);
    puts(extension);

    return 0;
}

void get_extension(const char *file_name, char *extension)
{
    while(*file_name != '.'){
        if(*file_name == '\0'){
            strcpy(extension, "");
            return;
        }
        file_name++;
    }

    strcpy(extension, file_name + 1);
}
