#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int ch, n;
    char filename[NAME_MAX + 1], output_filename[NAME_MAX + 5];
    FILE *fp, *out_fp;

    printf("Enter name of file to be encrypted: ");
    scanf("%s", filename);

    if((fp = fopen(filename, "rb")) == NULL) {
        fprintf(stderr, "Can't open %s\n", filename);
        exit(EXIT_FAILURE);
    }

    strcpy(output_filename, filename);
    strcat(output_filename, ".enc");

    if((out_fp = fopen(output_filename, "wb")) == NULL) {
        fprintf(stderr, "can't open %s\n", output_filename);
        fclose(fp);
        exit(EXIT_FAILURE);
    }
    
    printf("Enter the shift amount(1-25): ");
    scanf("%d", &n);

    while((ch = getc(fp)) != EOF) {  
        if(ch >= 'a' && ch <= 'z'){
            ch = ((ch - 'a') + n) % 26 + 'a';
        }else if (ch >= 'A' && ch <= 'Z'){
            ch = ((ch - 'A') + n) % 26 + 'A';
        }
        putc(ch, out_fp);
    }

    return 0;
}
