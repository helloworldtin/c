#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fp;
  int i, ch;
  
  if(argc < 2){
    fprintf(stderr, "No file to deal with give some file for operation\n");
    exit(EXIT_FAILURE);
  }

  for(i = 1; i < argc; i++) {
    if((fp = fopen(argv[i], "r")) == NULL) {
      fprintf(stderr, "Cannot open file %s\n", argv[i]);
      exit(EXIT_FAILURE);
    }

    while((ch = getc(fp)) != EOF)
          putchar(ch);
  }
  return 0;
}
