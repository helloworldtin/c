#include <stdio.h>

size_t strlen(const char* s)
{
    size_t n;
    for(n = 0; *s != '\0'; s++)
        n++;
    return n;
}

size_t strlen2(const char* s)
{
    size_t n = 0;
    for(;*s != '\0'; s++)
        n++;
    return n;
}

size_t str_len3(const char *s)\
{
    size_t n = 0;
    for(; *s != 0; s++)
        n++;
    return n;
}

size_t str_len4(const char *s)
{
    size_t n = 0;
    for(; *s; s++)
        n++;
    return n;
}


size_t str_len5(const char *s){
    size_t n = 0;
    for(;*s++;)
        n++;
    return n;
}

size_t str_len_final(const char*s){
    size_t n = 0;

    while(*s++)
        n++;

    return n;
}

size_t str_len_fast(const char *s)
{
    const char *p = s;

    while(*s)
        s++;

    return s - p;
}
