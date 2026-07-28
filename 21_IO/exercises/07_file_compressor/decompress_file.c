#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[])
{
    if(argc != 2) {
        fprintf(stderr, "Usage decompress file <filename>\n");
        exit(EXIT_FAILURE);
    }
    
    FILE *compressed_fp, *uncompressed_fp;
    char *filename, ch;
    int dot_count = 0;

    filename = argv[1];

    for(int i = 0;; i++) {
        if(filename[i] == '.')
            dot_count += 1;
        if(dot_count == 2)
            break;
        
        if(filename[i] == EOF) {
            fprintf(stderr, "Invalid compressed file\n");
            exit(EXIT_FAILURE);
        }
    }

    if(dot_count != 2) {
        fprintf(stderr, "Invalid file extension\n");
        exit(EXIT_FAILURE);
    }

    
    if((compressed_fp = fopen(filename, "rb")) == NULL) {
        fprintf(stderr, "Can't open %s\n", filename);
        exit(EXIT_FAILURE);
    }
    
    char *temp_filename = filename;
    dot_count = 0;
    while(*temp_filename) {
        if(*temp_filename == '.')
            dot_count++;
        if(dot_count  == 2) {
            *temp_filename = '\0';
            break;
        }
        temp_filename++;
    }
    char *output_filename = malloc(strlen(filename) + strlen(".uncompress_file") + 1); // 1 for '\0'
    strcpy(output_filename, filename);
    strcat(output_filename, ".uncompress_file");

    if((uncompressed_fp = fopen(output_filename, "wb")) == NULL) {
        fprintf(stderr, "Cannot create file for uncompressed file\n");
        exit(EXIT_FAILURE);
    }

    while((ch = getc(compressed_fp)) != EOF) {
        char temp = getc(compressed_fp);
        for(int i = 0; i < ch; i++){
            putc(temp, uncompressed_fp);
        }
    }

    fclose(compressed_fp);
    fclose(uncompressed_fp);
       
    return 0;
}
