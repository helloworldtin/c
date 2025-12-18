/*
 1. Writing a program that asks the user to enter the two-digit number, then prints the number with its digits reversed. A session with a program should have the following appearance.

 Enter a two-digit number: 28
 The reversal is: 82

 2. Extends this program to handle there digit number.
*/

#include <stdio.h>

int main(void){
  // int inputNumber;
  // printf("Enter a two-digit number: ");
  // scanf("%d",&inputNumber);

  // int reversed = 0;

  // while(inputNumber != 0){
  //   int lastDigit = inputNumber % 10;
  //   inputNumber /= 10;
  //   reversed = (reversed * 10) + lastDigit;
  // }
  // printf("The reversal number is: %d\n", reversed);
 int d1,d2,d3;
 printf("Enter a three digit number: ");
 scanf("%1d%1d%1d", &d1,&d2,&d3);

 printf("The reversal number is: %d%d%d\n",d3,d2,d1);
}
