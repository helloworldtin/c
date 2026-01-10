#include <stdio.h>


/* Write a program that asks the user to enter two integers, then calculates and displays their
greatest common divisor (GCD):*/


int main(void){
  int a, b;
  int gcd;

  printf("Enter the two integers: ");
  scanf("%d %d",&a,&b);

  while(a != 0 && b != 0){
    if(a >= b) {
      a = a %b;
    }else{
      b = b % a;
    }
  }
  if(a == 0) gcd = b;
  else gcd = a;

  printf("The gcd of %d\n",gcd);
  return 0;
}
