#include <stdio.h>
#include <stdbool.h>

struct date {
    int year;
    int month;
    int day;
};

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

void print_dates(struct date d1, struct date d2)
{
    printf("The data %.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
}

int main(void){

    struct date d1, d2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d",&d1.month,&d1.day,&d1.year);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d",&d2.month,&d2.day,&d2.year);

    if(compare_date(d1, d1) == -1){
        print_dates(d1, d2);
    }else if(compare_date(d1, d2) == 1){
        // just reverse the order
        print_dates(d2, d1);
    }else{
        printf("The dates are equal");
    }

    return 0;
}
