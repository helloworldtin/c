#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define KEY '&'

int main(int argc, char *argv[])
{
  FILE *input_fp, *output_fp;
  
  int orig_char, new_char;

  if(argc != 3) {
     fprintf(stderr, "please provide the input and output filename.\n");
     exit(EXIT_FAILURE);
  }

  if((input_fp = fopen(argv[1], "rb")) == NULL) {
    fprintf(stderr, "Cannot open file %s\n", argv[1]);
    exit(EXIT_FAILURE);
  }

  if((output_fp = fopen(argv[2], "wb")) == NULL) {
    fprintf(stderr, "Cannot open file %s\n", argv[2]);
    fclose(input_fp);
    exit(EXIT_FAILURE);
  }

  while((orig_char = getc(input_fp)) != EOF) {
      new_char = orig_char ^ KEY;
      putc(new_char, output_fp);
  }

  return 0;
}
