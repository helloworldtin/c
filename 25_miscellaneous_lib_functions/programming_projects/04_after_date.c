#include <stdio.h>
#include <time.h>

int main(void)
{
    struct tm t;
    int n;

    /* initalize unused members */
    t.tm_sec = t.tm_min = t.tm_hour = 0;
    t.tm_isdst = -1;

    printf("Enter month (1-12): ");
    scanf("%d", &t.tm_mon);
    // because struct tm used month 0-based monts.
    t.tm_mon--;

    printf("Enter day (1-31): ");
    scanf("%d", &t.tm_mday);

    printf("Enter year: ");
    scanf("%d", &t.tm_year);
    t.tm_year -= 1900;

    printf("Enter the number of days in future: ");
    scanf("%d", &n);

    t.tm_mday += n;
    mktime(&t);

    printf("\nFuture date: %d/%d/%dday, t.tm_year + 1900);

    return 0;
}
