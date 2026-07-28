#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
   if(argc != 2) {
        fprintf(stderr, "Usage compress <filename>\n");
        exit(EXIT_FAILURE);
    }

   FILE *original_fp,* compressed_fp;
   char ch, temp_ch = '\0', *filename = argv[1];
   int count;

   if((original_fp = fopen(filename, "rb")) == NULL) {
       fprintf(stderr, "Can't open %s\n", filename);
       exit(EXIT_FAILURE);
   }

   char *output_filename = malloc(strlen(filename) + 4); // .rle = 3
   if(output_filename == NULL) {
       fprintf(stderr, "Unable to allocate storage for new filename\n");
       exit(EXIT_FAILURE);
   }
   strcpy(output_filename, filename);
   strcat(output_filename, ".rle");

   if((compressed_fp = fopen(output_filename, "wb")) == NULL) {
       fprintf(stderr, "Con't open %s\n", output_filename);
       fclose(original_fp);
       exit(EXIT_FAILURE);
   }

   // compress algo
   while((temp_ch != '\0' && temp_ch != EOF ) || ((ch = getc(original_fp)) != EOF)) {
        count = 1;
        if(temp_ch != '\0')
            ch = temp_ch;
        while((temp_ch = getc(original_fp)) != EOF && ch == temp_ch)
            count++;
        
        if(count >= 0)
            putc(count, compressed_fp);
    
        putc(ch, compressed_fp);
       
    }

    fclose(original_fp);
    fclose(compressed_fp);
    
    return 0;
}
