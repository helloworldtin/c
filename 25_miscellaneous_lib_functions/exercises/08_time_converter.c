#include <stdio.h>
#include <time.h>

time_t time_of_year(int year)
{
    struct tm date = {0};

    date.tm_year = year - 1900;
    date.tm_mon = 0;
    date.tm_mday = 1;

    return mktime(&date);
}

int main(void)
{
    time_t hello = time_of_year(2000);
    printf("%ld\n", (long)hello);
    return 0;
}
