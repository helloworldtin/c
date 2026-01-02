/*
Modify the upc.c program of Section 4.1 so that it checks whether a UPC is valid. After
the user enters a UPC, the program will display either VALID or NOT VALID
*/

#include <stdio.h>

int main(){
  int d, i1, i2, i3, i4, i5, j1, j2,j3,j4,j5, check_digit, first_sum, second_sum, total;

  int odd_sum = i1 + i3 + i5 + j1 + j3 + j5;
  int even_sum = i2 + i4 + j2 + j4;

  printf("Enter the first single digit: ");
  scanf("%1d",&d);

  printf("Enter the first group of five digits: ");
  scanf("%1d%1d%1d%1d%d",&i1,&i2,&i3,&i4,&i5);

  printf("Enter the second group of five digit: ");
  scanf("%1d%1d%1d%1d%1d",&j1,&j2,&j3,&j4,&j5);

  printf("Enter the check digit: ");
  scanf("%d",&check_digit);

  if(((odd_sum * 3) + (even_sum + check_digit)%10) == 0){
    printf("The given UPC code is valid\n");
  }else{
    printf("The given UPC code is invalid");
  }

 return 0;
}