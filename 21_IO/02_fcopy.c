#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *source_fp, *destination_fp;
    int ch;

    if(argc != 3){
        fprintf(stderr, "usage: fcopy source destination\n");
        exit(EXIT_FAILURE);
    }

    if((source_fp = fopen(argv[1], "rb")) == NULL){
        fprintf(stderr, "can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if((destination_fp = fopen(argv[2], "wb")) == NULL){
        fprintf(stderr, "can't open %s\n", argv[2]);
        fclose(source_fp);
        exit(EXIT_FAILURE);
    }

    while((ch = getc(source_fp)) != EOF)
        putc(ch, destination_fp);

    fclose(source_fp);
    fclose(destination_fp);

    return 0;
}
