/*
Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-
xxxx and then displays the number in the form xxxxxxxxx:
*/
#include <stdio.h>

int main(void){
  printf("Enter your phone number: [(xxx) xxx-xxx]: ");

  int countryCode;
  int firstHalf;
  int secondHalf;

  scanf("(%d) %d-%d",&countryCode, &firstHalf,&secondHalf);
  printf("You had entered %.4d.%.d.%.d\n",countryCode,firstHalf,secondHalf);
  return 0;
}
