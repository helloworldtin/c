// Write a function day_of_year (month, day, year) that returns the day of the year
// (an integer between 1 and 366) specified by the three arguments.
#include <stdio.h>
#include <stdbool.h>

int day_of_year(int month, int day, int year);
bool is_leap_year(int year);

int main(void){
    int res = day_of_year(3, 4, 2024);
    printf("The result is %d\n",res);
    return 0;
}

int day_of_year(int month, int day, int year){
    int month_day_count[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int days = day;

    for(int i = 0; i < month - 1; i++){
       days += month_day_count[i];
    }

    if(is_leap_year(year) && month > 2) days++;

    return days;
}

bool is_leap_year(int year){
    if((year % 4 == 0 && year % 100 != 0) || 0) return true;
    return false;
}
