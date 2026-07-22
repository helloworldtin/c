#include <stdio.h>
#include <stdlib.h>


char *my_fgets(char *restrict str, int size, FILE *restrict stream)
{
    int ch, len = 0;

    while(len < size - 1) {
        if((ch = getc(stream)) == EOF){
            if(len == 0 || ferror(stream))
                return NULL;
            break;
        }
        str[len++] = ch;
        if(ch == '\n')
            break;
    }
    
    str[len] = '\0';
    return str;
}

int fputs(const char *restrict s, FILE *restrict stream)
{
  while(*s != '\0'){
    if(putc(*s, stream) == EOF)
      return EOF;
    s++;
  }

  return 0;
}
