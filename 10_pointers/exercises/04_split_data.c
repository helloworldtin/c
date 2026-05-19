#include <stdio.h>
#include <stdbool.h>

const int month_day_count[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const int month_day_count_leap[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void split_date(int day_of_year, int year, int *month, int *day);
bool is_leap_year(int year);

int main(void)
{
    int day_of_year = 228;
    int year = 2025;

    int month;
    int day;

    split_date(day_of_year, year, &month, &day);

    printf("The month is %d and day is %d\n", month, day);
    return 0;
}

bool is_leap_year(int year)
{
    if((year % 400 == 0) ||(year % 4 == 0 && (year % 100 != 0))) return true;
    return false;
}

void split_date(int day_of_year, int year, int *month, int *day)
{
    int i = 0;
    *month = 1;
    bool is_leap = is_leap_year(year);

    if(!is_leap){
        while ( day_of_year -  month_day_count[i] >= 0) {
            day_of_year -= month_day_count[i];
            *month = *month + 1;
            i++;
        }
    }else{
        while ( day_of_year -  month_day_count_leap[i] >= 0) {
            day_of_year -= month_day_count_leap[i];
            *month = *month + 1;
            i++;
        }
    }

    *day = day_of_year;
}
