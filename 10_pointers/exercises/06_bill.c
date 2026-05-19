#include <stdio.h>
#define TWENTY 20
#define TEN 10
#define FIVE 5
#define ONE 1


void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void){
  int amount;

  int countTwenty;
  int countTen;
  int countFive;
  int countOne ;

  printf("Enter the bill amount: ");
  scanf("%d",&amount);

  pay_amount(amount, &countTwenty, &countTen, &countFive, &countOne);

  printf("$20 bills: %d\n",countTwenty);
  printf("$10 bills: %d\n",countTen);
  printf("$5 bills: %d\n",countFive);
  printf("$1 bills: %d\n",countOne);

  return 0;
}


void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / TWENTY;
     dollars -= (TWENTY * *twenties);

    *tens = dollars / TEN;
    dollars -= (TEN * *tens );

    *fives = dollars / FIVE;
    dollars -= (FIVE * *fives);

    *ones = dollars / ONE;
    dollars -= (ONE * *ones);
}
