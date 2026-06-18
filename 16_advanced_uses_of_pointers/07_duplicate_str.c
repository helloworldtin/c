#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *duplicate(char *str)
{
    char *cpy_str = malloc(strlen(str) + 1);

    if(cpy_str == NULL){
        return NULL;
    }

    strcpy(cpy_str, str);
    return cpy_str;
}

int main(void)
{
    char *string;
    string = duplicate("hello world");
    puts(string);
    return 0;
}
