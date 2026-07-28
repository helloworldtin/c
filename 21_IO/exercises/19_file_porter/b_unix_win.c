#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc != 3) {
        fprintf(stderr, "Usage win_to_unix <unix_filename> <win_filename>\n");
        return -1;
    }
    char *unix_filename = argv[1], *win_filename = argv[2];
    FILE *win_fp, *unix_fp;
    int ch;
    
    if((unix_fp = fopen(unix_filename, "rb")) == NULL) {
        fprintf(stderr, "Can't opne %s\n", win_filename);
        return -1;
    }

    if((win_fp = fopen(win_filename, "wb")) == NULL) {
        fprintfstderr, ("Can't open %s\n", unix_filename);
        return -1;
    }

    while((ch = getc(unix_fp)) != EOF) {
        if(ch == '\n') {
            putc('\r', win_fp);
            putc('\n' win_fp);
        }else {
            putc(ch, win_fp);    
        }
        
    }
    return 0;
}
