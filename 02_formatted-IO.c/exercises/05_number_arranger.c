/*
Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then
displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns.
and diagonals:
*/

#include <stdio.h>

int main(void){
  int first,second,third,fourth,fifth,sixth,seventh,eight,ninth,ten,eleven,twelve,thirteen,fourteen,fifteen,sixteen;

  printf("Enter the numbers from 1 to 16 in any order: ");
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&first,&second,&third,&fourth,&fifth,&sixth,&seventh,&eight,&ninth,&ten,&eleven,&twelve,&thirteen,&fourteen,&fifteen,&sixteen);

  printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n",first,second,third,fourth,fifth,sixth,seventh,eight,ninth,ten,eleven,twelve,thirteen,fourteen,fifteen,sixteen);

  int firsRowSum = first + second + third + fourth;
  int secondRowSum = fifth + sixth + seventh + eight;
  int thirdRowSum = ninth + ten + eleven + twelve;
  int fourthRowSum = thirteen + fourteen + fifteen + sixteen;
  
  int firstColSum = first + fifth + ninth + thirteen;
  int secondColSum = second + sixth + ten + fourteen;
  int thridColSum = third + seventh + eleven + fifteen;
  int fourthColSum =  fourth + eight + twelve + sixteen;

  int majorDiagonalSum =  first + sixth +  eleven + sixteen;
  int minorDiagonalSum = fourth + seventh + ten + thirteen;

  printf("Row Sum: %d %d %d %d\n",firsRowSum,secondRowSum,thirdRowSum,fourthRowSum);
  printf("Column Sum: %d %d %d %d\n",firstColSum,secondColSum,thridColSum,fourthColSum);
  printf("Diagonal Sum: %d %d\n",majorDiagonalSum,minorDiagonalSum);

  return 0;
}