/*
Programming Project 8 in Chapter 2 asked you to write a program that calculates the
remaining balance on a loan after the first, second, and third monthly payments. Modify the
program so that it also asks the user to enter the number of payments and then displays the
balance remaining after each of these payments.
 */

#include <stdio.h>

int main(void){
  printf("Enter the amount of loan: ");
  float principalAmount;
  scanf("%f",&principalAmount);

  printf("Enter the interest rate: ");
  float interestRate;
  scanf("%f",&interestRate);

  printf("Enter the number of times you want to pay bill: ");
  int n;
  scanf("%d", &n);

  printf("Enter the monthly payments: ");
  float monthlyPayments;
  scanf("%f",&monthlyPayments);

  float simpleInterest;
  simpleInterest =( principalAmount * interestRate * (1.0/12.0))/100;

  for(int i = 0; i<n; i++){
      printf("Balance remaining after payments: $%.2f\n",principalAmount);
      principalAmount = (principalAmount - (monthlyPayments - simpleInterest));
  }

  return 0;
}
