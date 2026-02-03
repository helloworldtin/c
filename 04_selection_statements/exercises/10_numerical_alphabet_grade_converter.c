/*
Using the switch statement, write a program that converts a numerical grade into a letter
grade:
Enter numerical grade : 84
Letter grade : B
Use the following grading scale: A = 90-100, B = 80-89, C = 70-79, D = 60-69, F = 0-59.
Print an error message if the grade is larger than 100 or less than O. Hint: Break the grade
into two digits, then use a switch statement to test the ten's digit.
*/
#include <stdio.h>

int main(void){
  int numerical_grade;

  printf("Enter the numerical grade: ");
  scanf("%d",&numerical_grade);

  if(numerical_grade > 100 || numerical_grade < 0){
    printf("This is bad grade\n");
    return -1;
  }

  int check_digit = numerical_grade / 10;

  switch(check_digit){
    case 10:
    case 9:
      printf("Grade Letter: A\n");
      break;
    case 8:
      printf("Grade Letter: B\n");
      break;
    case 7:
      printf("Grade Letter: C\n");
      break;
    case 6:
      printf("Grade Letter: D\n");
      break;
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      printf("Grade Letter: F\n");
      break;
    default:
      printf("You have wrong grade man\n");
  }

  return 0;
}
