#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define N 8

//time since mid-night in minutes
struct time {
    int departure_time;
    int arrival_time;
};

int main(void){
    struct time times[N] = {
        {480, 616},    // 8:00 a.m.  -> 10:16 a.m.
        {583, 712},    // 9:43 a.m.  -> 11:52 a.m.
        {679, 811},    // 11:19 a.m. -> 1:31 p.m.
        {767, 900},    // 12:47 p.m. -> 3:00 p.m.
        {840, 968},    // 2:00 p.m.  -> 4:08 p.m.
        {945, 1075},   // 3:45 p.m.  -> 5:55 p.m.
        {1140, 1280},  // 7:00 p.m.  -> 9:20 p.m.
        {1305, 1438}   // 9:45 p.m.  -> 11:58 p.m.
    };

    int hour, min, i, closest_index = 0 ;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d",&hour,&min);

    int total_min = hour * 60 + min;

    int min_distance = abs(total_min - times[0].departure_time);
    for(i = 1; i < N; i++){
        int temp = abs(total_min - times[i].departure_time);
        if(temp < min_distance){
            min_distance = temp;
            closest_index = i;
        }
    }
    /* Convert the number into the actual time */
    bool is_am = hour <= 12 ? true : false;

    /* using the same variable for departure hour */
    hour = times[closest_index].departure_time / 60;
    min = times[closest_index].departure_time % 60;

    /* Hour and min for arrival time */
    int arrival_hour = times[closest_index].arrival_time / 60;
    int arrival_min = times[closest_index].arrival_time % 60;

    char *departure_time_postfix = hour > 12 ? "p.m." : "a.m.";
    char *arrival_time_postfix = arrival_hour > 12 ? "p.m." : "a.m.";
    if(hour > 12)
        hour -= 12;

    if(arrival_hour > 12)
        arrival_hour -= 12;


    printf("Closest departure time is %.2d:%.2d %s, arriving at %.2d:%.2d %s\n",
        hour,
        min, departure_time_postfix, arrival_hour,
        arrival_min, arrival_time_postfix);
    return 0;
}
