/* Rearrange the s q u a r e . c program so that the f o r loop initializes i, tests i, and incre-
ments i. Don't rewrite the program; in particular, don't use any multiplications.*/

#include <stdio.h>

int main(void){
  int  n, odd, square;

  printf("This program prints the table of square.\n");
  printf("Enter the number of entries in the table: ");

  scanf("%d",&n);

  odd = 3;
  square = 1;

  for(int i = 1; i <= n; i++){
    printf("%10d%10d\n",i,square);
    if(i > 1){
      odd += 2;
    }
    square += odd;
  }
  return 0;
}
