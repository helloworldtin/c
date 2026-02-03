/*Write a program that prompts the user to enter two dates and then indicates which date comes earlier on the calendar*/

#include <stdio.h>
#include <stdbool.h>

int main(void){
  int first_day, first_month, first_year;
  int second_day, second_month, second_year;

  printf("Enter first date (mm/dd/yy): ");
  scanf("%d/%d/%d",&first_month,&first_day,&first_year);

  printf("Enter second date (mm/dd/yy): ");
  scanf("%d/%d/%d",&second_month,&second_day,&second_year);

  bool is_first_year_greater = false;

  if(first_year > second_year){
    is_first_year_greater = true;
  }else if(first_year == second_year){
    if(first_month > second_month){
      is_first_year_greater = true;
    }else if(first_month == second_month){
      if(first_day > second_day){
        is_first_year_greater = true;
      }
    }
  }

  if(is_first_year_greater){
    printf("%d/%d/%.2d is earlier than %d/%d/%.2d \n",second_month,second_day,second_year,first_month,first_day,first_year);
  }else{
    printf("%d/%d/%.2d is earlier than %d/%d/%.2d \n",first_month, first_day,first_year,second_month, second_day, second_year);
  }
  return 0;
}
