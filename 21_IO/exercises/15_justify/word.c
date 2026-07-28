#include <stdio.h>
#include "word.h"

static int read_char(FILE *stream)
{
    int ch = getc(stream);
    if(ch == '\n' || ch == '\t')
        return ' ';
    return ch;
}

void read_word(char *word, int len, FILE *stream)
{
    int ch, pos = 0;

    while((ch = read_char(stream)) == ' ')
        ;
    while(ch != ' ' && ch != EOF) {
        if(pos < len)
            word[pos++] = ch;
        ch = read_char(stream);
                
    }
    word[pos] = '\0';
}
