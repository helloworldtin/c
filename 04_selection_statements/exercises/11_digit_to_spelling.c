// Write a program that asks the user for a two-digit number, then prints the English word for
// the number:
// Enter a two-digit number: 45
// You entered the number forty-five.
// Hint: Break the number into two digits. Use one switch statement to print the word for the
// first digit ("twenty," "thirty," and so forth). Use a second switch statement to print the
// word for the second digit. Don't forget that the numbers between 11 and 19 require special
// treatment.

#include <stdio.h>

int main(void){
  int two_digit_number;
  printf("enter two digit number: ");
  scanf("%d",&two_digit_number);

  if(two_digit_number >= 10 && two_digit_number <= 19 ){
    switch(two_digit_number){
      case 10: printf("Ten\n"); break;
      case 11: printf("Eleven\n"); break;
      case 12: printf("Twelve\n"); break;
      case 13: printf("Thirteen\n"); break;
      case 14: printf("Fourteen\n"); break;
      case 15: printf("Fifteen\n"); break;
      case 16: printf("Sixteen\n"); break;
      case 17: printf("seventeen\n"); break;
      case 18: printf("eighteen\n"); break;
      case 19: printf("nineteen\n"); break;
    }

    return 0;
  }


  int first_digit = two_digit_number / 10;
  int last_digit = two_digit_number % 10;

  switch(first_digit){
    case 2: printf("twenty-"); break;
    case 3: printf("thirty-"); break;
    case 4: printf("forty-"); break;
    case 5: printf("fifty-"); break;
    case 6: printf("sixty-"); break;
    case 7: printf("seventy-"); break;
    case 8: printf("eighty-"); break;
    case 9: printf("ninety-"); break;
  }

  switch(last_digit){
    case 0: printf("\b\n"); break;
    case 1: printf("one\n"); break;
    case 2: printf("two\n"); break;
    case 3: printf("three\n"); break;
    case 4: printf("four\n"); break;
    case 5: printf("five\n"); break;
    case 6: printf("six\n"); break;
    case 7: printf("seven\n"); break;
    case 8: printf("eight\n"); break;
    case 9: printf("nine\n"); break;
  }

  return 0;

}
