#include <stdio.h>
#include <stdlib.h>


void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void){
  int hour, min, departure_time, arrival_time;


  printf("Enter a 24-hour time: ");
  scanf("%d:%d",&hour,&min);

  int desired_time = hour * 60 + min;
  find_closest_flight(departure_time, &departure_time, &arrival_time);


  printf("Departure time in minutes from mid-night is %d\n", departure_time);
  printf("Arrival time in minutes from mid-night is %d\n", arrival_time);

  return 0;
}


void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    if(desired_time <= 480){
      *departure_time = 8 * 60;
      *arrival_time = 10 * 60 + 16;
    }else if(desired_time > 480 && desired_time <= 583){
      *departure_time = 9 * 60 + 43;
      *arrival_time = 11 * 60 + 52;
    }else if(desired_time > 583 && desired_time <= 679){
      *departure_time = 11 * 60 + 19;
      *arrival_time = 13 * 60 + 31;
    }else if(desired_time > 679 && desired_time <= 767){
      *departure_time = 12 * 60 + 47;
      *arrival_time = 15 * 60;
    }else if(desired_time > 767 && desired_time <= 840){
      *departure_time = 13 * 60;
      *arrival_time = 16 * 60;
    }else if(desired_time > 840 && desired_time <= 945){
      *departure_time = 3 * 15 + 45;
      *arrival_time = 17 * 60 + 55;
    }else if(desired_time > 945 && desired_time <= 1140){
      *departure_time = 19 * 60;
      *arrival_time = 21 * 60 + 20;
    }else if(desired_time > 1140 && desired_time <= 1305){
        *departure_time = 21 * 60 + 45;
        *arrival_time = 23 * 11 + 58;
    }else{
      printf("invalid time\n");
      exit(EXIT_FAILURE);
    }

}
