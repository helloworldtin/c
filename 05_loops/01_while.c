#include <stdio.h>

int main(void){
  // introduction to while loop.
  int i = 10;

  while(i > 0){
    printf("T minus %d and counting\n",i);
    i--;
  }
  // program to calculate the square of the number from 1 - n;

  int ii, n;

  printf("This program prints a table of squares.\n");
  printf("Enter the number of entries in the table: ");
  scanf("%d",&n);

  ii = 1;

  while(i <= n){
    printf("%10d%10d\n",i, ii * ii);
    ii++;
  }

  return 0;
}
