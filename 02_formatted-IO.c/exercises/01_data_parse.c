// Write the program that accepts a date from  the user in the form mm/dd/yyyy and display in the form yyyymmdd:

// Eg. Enter the date (mm/dd/yyyy): 2/17/2011
// You entered the date 20110217
#include <stdio.h>

int main(void){
  int month;
  int day;
  int year;

  printf("Enter the date(mm/dd/yyyy): ");
  scanf("%d/%d/%d",&month,&day,&year);
  printf("You entered the data %.4d%.2d%.2d\n",year,month,day);
}
