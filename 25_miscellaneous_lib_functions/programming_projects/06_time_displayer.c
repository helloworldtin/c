#include <stdio.h>
#include <time.h>

void a_solution()
{
    time_t current = time(NULL);
    struct tm *ptr;
    char date_time[37];

    ptr = localtime(&current);
    strftime(date_time, sizeof(date_time), "%A, %B %d, %Y %I:%M", ptr);
    printf("%s %c.m\n", date_time, ptr->tm_hour <= 11 ? 'a': 'p');
}

void b_solution()
{
    time_t current = time(NULL);
    char date_time[22];

    strftime(date_time, sizeof(date_time), "%a, %d %b %y %H:%M", localtime(&current));
    puts(date_time);
}

void c_solution()
{
    time_t current = time(NULL);
    struct tm *ptr;
    char date[9], time[12];

    ptr = localtime(&current);
    strftime(date, sizeof(date), "%m/%d/%y", ptr);
    strftime(time, sizeof(time), "%I:%M:%S %p", ptr);

    // print date and time, supressing leading zero in hours
    // give address of character at index 1
    // &time[1] means.
    printf("%s  %s\n", date, time[0] == '0' ? &time[1] : time );
}

int main(void)
{
    a_solution();
    b_solution();
    c_solution();
    return 0;
}
