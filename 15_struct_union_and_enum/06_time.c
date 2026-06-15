#include <stdio.h>

struct time {
    int hours;
    int minutes;
    int seconds;
};

struct time split_time(long total_seconds)
{
    struct time t;
    t.hours = (total_seconds / 3600) % 24;
    t.minutes = (total_seconds % 3600) / 60;
    t.seconds = total_seconds % 60;
    return t;
}

int main(void)
{
    struct time result = split_time(4646);
    printf("The time is %.2d:%.2d:%.2d\n", result.hours, result.minutes, result.seconds);
    return 0;
}
