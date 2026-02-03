#include <stdio.h>

int main(void){
  int i ,j;
  float x,y;

  i = 10;
  j = 20;

  x = 43.9348f;
  y = 89.534f;

  // %d and %f are conversion specifications.
  // which means some binary value  will come in
  // and convert that in to character accordingly.
  // e.g %d is the placeholder for int
  // %f for the float and so on.

  printf("i = %d | j = %d | x = %f | y = %f",i,j,x,y);
  return 0;
}
