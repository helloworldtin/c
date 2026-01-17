// Write a program that asks the user to enter a value for x and then displays the value of the
// following polynomial:
// 3x^5 + 2x^4 - 5x^3 - x^2 + 7x-6


#include <stdio.h>

int main(void){
  float x;
  printf("Enter the value of x for the polynomial f(x) =3x^5 + 2x^4 - 5x^3 - x^2 + 7x-6: ");
  scanf("%f",&x);
  float ans = (3*x*x*x*x*x) + (2*x*x*x*x) - (5 * x * x * x) - (x*x) + (7 * x) - 6;
  printf("The value is %.2f\n",ans);
  return 0;
}
