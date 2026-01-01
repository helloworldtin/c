// Write a program that calculates how many digits a number contains:
// You may assume that the number has no more than four digits. Hint: Use i f statements to
// test the number: For example, if the number is between 0 and 9, it has one digit. If the num-
// ber is between 10 and 99, it has two digits.

#include <stdio.h>

int main(void){
  int number;

  printf("Enter the number: ");
  scanf("%d",&number);

  if(number >=0 && number <= 9) {
    printf("The number was one digit\n");
  }else if(number >= 10 && number <= 99){
    printf("The number has two digit\n");
  }else if(number >= 100 && number <= 999){
    printf("The number has three digit\n");
  }else if(number >= 1000 && number <= 9999){
    printf("The number has four digit\n");
  }else{
    printf9("The number is invalid\n");
  }
  return 0;
}