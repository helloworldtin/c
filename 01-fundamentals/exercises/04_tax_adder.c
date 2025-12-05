// Write a program that asks the user to enter a dollars-and-cents amount, then displays the
// amount with 5% tax added:
// E n t e r a n a m o u n t : 1 0 0 . 0 0
// W i t h t a x a d d e d : $ 1 0 5 . 0 0


#include <stdio.h>
#define TAX_PER 5.0

int main(void){
  float userAmount;
  printf("Enter the amount $: ");
  scanf("%f",&userAmount);
  

  float amountWithTax = userAmount + ( userAmount * (TAX_PER/100.0));

  printf("The amount with tax added is: %.2f\n",amountWithTax);
  return 0;
}