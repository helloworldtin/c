#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

struct year_of_normal_leap {
    int normal[12];
    int leap[12];
} day_in_month_count = {
    .normal = {31,28,31,30,31,30,31,31,30,31,30,31},
    .leap = {31,29,31,30,31,30,31,31,30,31,30,31},
};

int is_leap_year(int year)
{
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    return 0;
}

int day_of_year(struct date d)
{
    int i, day_count = 0, is_leap = is_leap_year(d.year);

    for(i = 0; i < d.month - 1; i++){
        day_count += is_leap ? day_in_month_count.leap[i] : day_in_month_count.normal[i];
    }
    return day_count + d.day;
}

/***************************************
*  returns                             *
*   -1 = if(d1 is earlier than d2)     *
*    1 = if(d1 is after d2)            *
*    0 = if they are same              *
****************************************/
int compare_date(struct date d1, struct date d2)
{
    if(d1.year < d2.year) return -1;
    if(d1.year > d2.year) return 1;

    if(d1.month < d2.month) return -1;
    if(d1.month > d2.month) return 1;

    if(d1.day < d2.day) return -1;
    if(d1.day > d2.day) return 1;

    return 0;
}

int main(void)
{

    struct date d1 = {.day = 10, .year = 2025, .month = 11};
    struct date d2 = {.day = 10, .year = 2025, .month = 11};
    printf("The day count of d1 is %d\n", day_of_year(d1));

    printf("The comparison of date is %d\n", compare_date(d1, d2));
    return 0;
}
