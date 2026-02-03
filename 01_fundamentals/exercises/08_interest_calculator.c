/*
 Write the program that calculates the remaining balance on a loan after the, first, second and third monthly payments.

 E.G.
 Enter the amount of loan: 20000.00
 Enter the interest rate: 6.0
 Enter the monthly payments: 386.66

 Balance remaining after first payment: $19713.34
 Balance remaining after second payment: $19425.25
 Balance remaining after third payment: $19135.71
*/

#include <stdio.h>

int main(void){
  printf("Enter the amount of loan: ");
  float principalAmount;
  scanf("%f",&principalAmount);

  printf("Enter the interest rate: ");
  float interestRate;
  scanf("%f",&interestRate);

  printf("Enter the monthly payments: ");
  float monthlyPayments;
  scanf("%f",&monthlyPayments);
  float simpleInterest;
  simpleInterest =( principalAmount * interestRate * (1.0/12.0))/100;


  principalAmount = (principalAmount - (monthlyPayments - simpleInterest));
  printf("Balance remaining after first payments: %.2f\n",principalAmount);

  simpleInterest =( principalAmount * interestRate * (1.0/12.0))/100;
  principalAmount = (principalAmount - (monthlyPayments - simpleInterest));
  printf("Balance remaining after second payments: %.2f\n",principalAmount);

  simpleInterest =( principalAmount * interestRate * (1.0/12.0))/100;
  principalAmount = (principalAmount - (monthlyPayments - simpleInterest));
  printf("Balance remaining after second payments: %.2f\n",principalAmount);

  return 0;
}
