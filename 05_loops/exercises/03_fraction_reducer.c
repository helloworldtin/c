/* Write a program that asks the user to enter a fraction, then reduces the fraction to lowest
terms:*/

#include <stdio.h>

int main(void){
  int numerator,denominator;

  printf("Enter a fraction: ");
  scanf("%d/%d",&numerator,&denominator);

  int gcd;
  int a = numerator;
  int b = denominator;

  while(a != 0 && b != 0){
    if(a >= b){
       a = a % b;
    }else{
       b = b % a;
    }
  }

  if(a == 0) gcd = b;
  else gcd = a;

  printf("In lowest term: %d/%d\n",numerator/gcd,denominator/gcd);
  return 0;
}
