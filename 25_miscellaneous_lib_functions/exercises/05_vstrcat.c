#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

char *vstrcat(const char *first, ...)
{
    va_list ap;
    char *current_str, *result;
    int whole_str_size = 0;
    
    va_start(ap, first);
    current_str = va_arg(ap, char *);
    
    while(current_str != NULL) {
        whole_str_size += strlen(current_str);
        current_str = va_arg(ap, char *);
    }
    
    va_end(ap);
    va_start(ap, first);

    result  = malloc(whole_str_size + 1);
    
    if(result == NULL) {
        return NULL;
    }
    
    if(first != NULL) {
        strcat(result, first);
    }
    
    current_str = va_arg(ap, char *);
    
    while(current_str != NULL) {
        strcat(result, current_str);
        current_str = va_arg(ap, char *);
    }
    
    va_end(ap);
    return result;
}

int main(void)
{
    char *result = vstrcat("Hello ", "world ", "I am ", "pretty ", "dump.",NULL);
    puts(result);
    return 0;
}
