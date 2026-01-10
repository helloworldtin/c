/* Programming Project 1 in Chapter 4 asked you to write a program that displays a two-digit
number with its digits reversed. Generalize the program so that the number can have one.
two, three, or more digits. Hint: Use a do loop that repeatedly divides the number by 10,
stopping when it reaches 0. */


#include <stdio.h>

int main(void){
  int num;

  printf("Enter the number you want to the count of: ");
  scanf("%d",&num);

  int count = 0;
  do{
    num /= 10;
    count++;
  }while(num > 0);

  printf("The count of digit is %d\n", count);
  return 0;
}
