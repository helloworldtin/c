#include <stdio.h>

int main(void){
  int i;
  float x;

  i = 40;
  x = 839.21f;
  // %5.3d
  // -> this means we are allocating 5 space for coming value.
  // ->.3d means that three values are guaranteed to coming.

  printf("|%d|%5d|%-5d|%5.3d|\n",i, i, i, i);
  printf("|%10.3f|%10.3e|%-10g|\n",x, x, x);
  printf("\a\n");

  return 0;
}