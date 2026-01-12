/* Programming project 9 in chapter 5 asked you to write  the program  that determines  which of  two
 * dates come earlier in the calendar. Generalize the program  so that the user may eneter any number of dates.
 * The user enter the 0/0/0 to indecates now more date will be include.
 */
#include <limits.h>
#include <stdio.h>
#include <stdbool.h>

int main(void){
    int min_month  = INT_MAX, min_day = INT_MAX, min_year = INT_MAX;

    while(1){
        int current_month, current_day, current_year;
        printf("Enter the date (mm/dd/yy): ");
        scanf("%d/%d/%d",&current_month ,&current_day,&current_year);

        if(current_day == 0 && current_month == 0 && current_year == 0) break;

        if(current_year < min_year){
            min_day = current_day;
            min_month = current_month;
            min_year = current_year;
        }else if(current_month < min_month){
            min_day = current_day;
            min_month = current_month;
            min_year = current_year;
        }else if(current_day < min_day){
            min_day = current_day;
            min_month = current_month;
            min_year = current_year;
        }
    }
    printf("%d/%d/%d is the earliest day\n", min_month,min_day,min_year);

    return 0;
}
