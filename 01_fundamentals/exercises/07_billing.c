// Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay
// that amount using the smallest number of $20, $10, $5, and $1 bills:
// Enter a dollar amount:

#include <stdio.h>
#define TWENTY 20
#define TEN 10
#define FIVE 5
#define ONE 1

int main(void){
  int amount;

  int countTwenty = 0;
  int countTen = 0;
  int countFive = 0;
  int countOne  = 0;

  printf("Enter the bill amount: ");
  scanf("%d",&amount);

  countTwenty = amount / TWENTY;
  amount -= (TWENTY * countTwenty);

  countTen = amount / TEN;
  amount -= (TEN * countTen);

  countFive = amount / FIVE;
  amount -= (FIVE * countFive);

  countOne = amount / ONE;
  amount -= (ONE * countOne);


  printf("$20 bills: %d\n",countTwenty);
  printf("$10 bills: %d\n",countTen);
  printf("$5 bills: %d\n",countFive);
  printf("$1 bills: %d\n",countOne);

  return 0;
}
