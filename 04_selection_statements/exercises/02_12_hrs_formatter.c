// Write a program that asks the user for a 24-hour time, then displays the time in 12-hour
// form:

#include <stdio.h>

int main(void){
  int hrs;
  int min;

  printf("Enter a 24-hour time: ");
  scanf("%d : %d",&hrs, &min);

  if(hrs == 0){
    printf("Equivalent 12-hour time: %.2d : %.2d AM\n",12,min);
  }else if(hrs >= 1 && hrs <=  11){
    printf("Equivalent 12-hour time: %.2d : %.2d AM\n",hrs, min);
  }else if(hrs == 12){
    printf("Equivalent 12-hour time: %.2d : %.2d PM\n",hrs, min);
  }else{
    printf("Equivalent 12-hour time: %.2d : %.2d PM\n", hrs - 12, min);
  }
  return 0;
}