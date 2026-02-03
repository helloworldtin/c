/*
 Write the program that reads an integer entered by user and display them in the octal(base 8).
*/

#include <stdio.h>

int main(void){
  printf("Enter the number between 0 and 32767: ");
  int user_decimal;
  scanf("%d",&user_decimal);
  int ans = 0;
  int factor = 1;

  for(int i = 0; user_decimal !=0 ; i++){
    int last_digit = user_decimal % 8;
    user_decimal /= 8;
    ans = last_digit * factor + ans;
    factor *= 10;
  }

  printf("In octal, your number is: %.5d\n",ans);
}
