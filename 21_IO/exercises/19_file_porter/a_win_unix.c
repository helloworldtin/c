#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc != 3) {
        fprintf(stderr, "Usage win_to_unix <win_filename> <unix_filename>\n");
        return -1;
    }
    char *win_filename = argv[1], *unix_filename = argv[2];
    FILE *win_fp, *unix_fp;
    int ch;

    if((win_fp = fopen(win_filename, "rb")) == NULL) {
        fprintf(stderr, "Can't opne %s\n", win_filename);
        return -1;
    }

    if((unix_fp = fopen(unix_filename, "wb")) == NULL) {
        fprintfstderr, ("Can't open %s\n", unix_filename);
        return -1;
    }

    while((ch = getc(win_fp)) != EOF) {
        if(ch == '\r') {
            putc('\n', unix_fp);
        }
        else if(ch != '\n')
            putc(ch, unix_fp);
    }
    
    return 0;
}
