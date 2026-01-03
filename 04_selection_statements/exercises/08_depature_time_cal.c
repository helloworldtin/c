/*
Write a program that asks user to enter a time (expressed in hours and minutes, using the 24-hour clock). The program then displays the departure and arrival times for the flight whose
departure time is closest to that entered by the user:
Enter a 24 - hour time : 13 : 15
Closest departure time is 12:47 p.m., arriving a t 3:00 p.m.
Hint: Convert the input into a time expressed in minutes since midnight, and compare it to
the departure times, also expressed in minutes since midnight. For example, 13:15 is 13 x
60 + 15 = 795 minutes since midnight, which is closer to 12:47 p.m. (767 minutes since
midnight) than to any of the other departure times.
*/

int main(void){
  int hour;
  int min;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d",&hour,&min);

  int totalMin = hour * 60 + min;

  if(totalMin <= 480){
    printf("Closest departure time is 8:00 a.m, arriving at 10:16 a.m\n");
  }else if(totalMin > 480 && totalMin <= 583){
    printf("Closest departure time is 9:43 a.m, arriving at 11:52 a.m\n");
  }else if(totalMin > 583 && totalMin <= 679){
    printf("Closest departure time is 11:19 a.m, arriving at 1:31 p.m\n");
  }else if(totalMin > 679 && totalMin <= 767){
    printf("Closest departure time is 12:47 p.m, arriving at 3:0 p.m\n");
  }else if(totalMin > 767 && totalMin <= 840){
    printf("Closest departure time is 2:00 p.m, arriving at 4:08 p.m\n");
  }else if(totalMin > 840 && totalMin <= 945){
    printf("Closest departure time is 3:45 p.m, arriving at 5:55 p.m\n");
  }else if(totalMin > 945 && totalMin <= 1140){
    printf("Closest departure time is 7:00 p.m, arriving at 9:20 p.m\n");
  }else if(totalMin > 1140 && totalMin <= 1305){
    printf("Closest departure time is 9:45 p.m, arriving at 11:58 p.m\n");
  }else{
    printf("invalid time\n");
  }

  return 0;
}