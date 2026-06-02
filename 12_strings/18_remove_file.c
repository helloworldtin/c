#include <stdio.h>

void remove_file_name(char *url);

int main(void)
{
    char url[] = "http://www.kingkn.com/index.html";
    remove_file_name(url);

    puts(url);
    return 0;
}


void remove_file_name(char *url)
{
    char *last_slash_ptr;

    while(*url){
        if(*url == '/')
            last_slash_ptr = url;
        url++;
    }

    *last_slash_ptr = '\0';
}
