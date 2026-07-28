// solution of a

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fp;
  int count = 0;

  if(argc != 2) {
    fprintf(stderr, "usage: cntchar file\n");
    exit(EXIT_FAILURE);
  }

  if((fp = fopen(argv[1])) == NULL) {
    fprintf(stderr, "Can't open %s\n", argc[1]);
    exit(EXIT_FAILURE);
  }

  while(fetc(fp) != EOF)
    count++;

  printf("There are %d character in %s\n", count, argc[1]);

  fclose(fp);
  
  return 0;
}

// solution of b

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argc[])
{
  FILE *fp;
  int ch, count = 0;
  bool in_word;

  if(argc != 2) {
    fprintf(stderr, "usage: cntword file\n");
    exit(EXIT_FAILURE);
  }

  if((fp = fopen(argv[1], "r")) == NULL) {
    fprintf(stderr, "Can't open %s\n", argv[1]);
    exit(EXIT_FAILURE);
  }

  in_word = false;
  while((ch = getc(fp)) != EOF)
    if(isspace(ch))
      in_word = false;
    else if (!in_word) {
      in_word  = true;
      count++;
    }

  printf("There are %d words in %s\n", count, argv[1]);
  fclose(fp);
  return 0;
}

// solution 3

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fp;
  int ch, count = 0;

  if(argc != 2) {
    fprintf(stderr, "usage: cntlin file\n");
    exit(EXIT_FAILURE);
  }

  if((fp = fopen(argv[1], "r")) == NULL) {
    fprintf(stderr, "Can't open %d\n", argv[1]);
    exit(EXIT_FAILURE);
  }

  while((ch = getc(fp)) != EOF)
    if(ch == '\n')
      count++;

  printf("There are %d line at percentage %s\n", count, argv[1]);
  
  fclose(fp);
  return 0;
}
