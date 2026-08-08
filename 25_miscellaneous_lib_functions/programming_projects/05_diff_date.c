#include <stdio.h>
#include <time.h>

int main(void)
{
    struct tm date1 = {0}, date2 = {0}, diff_date;
    time_t time1, time2, diff;
    date1.tm_isdst = date2.tm_isdst = -1;

    printf("For the first date\n-----------------\n");
    printf("Enter month (1-12): ");
    scanf("%d", &date1.tm_mon);
    date1.tm_mon -= 1;

    printf("Enter day (1-31): ");
    scanf("%d", &date1.tm_mday);

    printf("Enter year: ");
    scanf("%d", &date1.tm_year);
    date1.tm_year -= 1900;

    printf("For the second date\n-----------------\n");
    printf("Enter month (1-12): ");
    scanf("%d", &date2.tm_mon);
    date2.tm_mon -= 1;

    printf("Enter day (1-31): ");
    scanf("%d", &date2.tm_mday);

    printf("Enter year: ");
    scanf("%d", &date2.tm_year);
    date2.tm_year -= 1900;

    time1 = mktime(&date1);
    time2 = mktime(&date2);

    diff = difftime(time2, time1);
    mktime(&diff_date);
    
    printf("\Difference  date: %d/%d/%d\n", diff_date.tm_mon + 1, diff_date.tm_mday, diff_date.tm_year + 1900);

    return 0;
}
