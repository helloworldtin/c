#include <stdio.h>


void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void){
  int numerator,denominator;
  int reduced_numerator, reduced_denominator;

  printf("Enter a fraction: ");
  scanf("%d/%d",&numerator, &denominator);

  reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

  printf("In lowest term: %d/%d\n", reduced_numerator, reduced_denominator);
  return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
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

    *reduced_numerator = numerator / gcd;
    *reduced_denominator =  denominator / gcd;
}
