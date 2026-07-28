#include <stdio.h>

int main(void){
    unsigned int i, hour, minutes, user_time,
                depature_time = 0, arrival_time = 0;
    
     int depature_hour, depature_min, arrival_hour, arrival_min,
            depature_time_in_min, arrival_time_in_min;
     
    char buffer[100];
    FILE *fp;

    if((fp = fopen("flights.dat", "rb")) == NULL) {
        fprintf(stderr, "Can't open flights.dat file");
        return -1;
    }

    printf("Enter the 24-hour time: ");
    scanf("%u:%u", &hour, &minutes);

    user_time = (hour * 60) + minutes;

    unsigned int depature_time_temp = 0, arrival_time_temp = 0;
    while(fgets(buffer, 100, fp) != NULL) {
        sscanf(buffer, "%d:%d %d:%d", &depature_hour, &depature_min, &arrival_hour, &arrival_min);

        depature_time_in_min = depature_hour * 60 + depature_min;
        arrival_time_in_min = arrival_hour * 60 + arrival_min;

        if(user_time == depature_time_in_min) {
            depature_time = depature_time_in_min;
            arrival_time = arrival_time_in_min;
            break;
        }else if(depature_time_in_min > user_time && depature_time_temp !=  0) {
            depature_time = depature_time_temp;
            arrival_time = arrival_time_temp;
            break;
        }
        
        depature_time_temp = depature_time_in_min;
        arrival_time_temp = arrival_time_in_min;
    }

    if(depature_time == 0 && arrival_time == 0) {
        fprintf(stderr, "invalid time\n");
        return -1;
    }
    
    if(arrival_hour == 0) arrival_hour = 12;
    if(depature_hour == 0) depature_hour = 12;

    printf("Closest departure time is %.2u:%.2u ",depature_hour, depature_min);
    if((depature_time/60) >= 12)
        printf("p.m");
    else
        printf("a.m");

    printf(", arriving at %.2u:%.2u ",arrival_hour, arrival_min);
    if((depature_time/60) >= 12)
        printf("p.m");
    else 
       printf("a.m");

    printf("\n");
    return 0;
}
