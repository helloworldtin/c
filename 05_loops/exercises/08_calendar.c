/*
 Write a program that prints a one-month calendar. The user specifies the number of days in
 the month and the day of the week on which the month begins:
*/

#include <stdio.h>

int main(void){
  int starting_day;
  int month_day_count;

  printf("Enter the number of days in month: ");
  scanf("%d",&month_day_count);

  printf("Enter starting day of the week(1=Sun, 7=Sat): ");
  scanf("%d", &starting_day);

  for(int i = 1; i<=starting_day; i++){
    printf(" ");
  }
  for(int i = 1; i <= month_day_count; i++){
    if((i + starting_day)%7 == 0) printf("\n");
    else printf("%d ", i);
  }
  printf("\n");

  return 0;
}

