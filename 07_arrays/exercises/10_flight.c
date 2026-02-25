#include <stdio.h>

int main(void){
    const unsigned int depature[] = {
        8*60+0,
        9*60+43,
        11*60+19,
        12*60+47,
        14*60+0,
        15*60+45,
        19*60+0,
        21*60+45,
    };

    const unsigned int arrival[] = {
        11*60+16,
        11*60+52,
        13*60+31,
        15*60+0,
        16*60+8,
        17*60+55,
        21*60+20,
        23*60+58,
    };

    unsigned int hour;
    unsigned int minutes;

    unsigned int deptature_time = 0;
    unsigned int arrival_time = 0;

    printf("Enter the 24-hour time: ");
    scanf("%u:%u",&hour, &minutes);

    unsigned int user_timer = (hour * 60) + minutes;

    for(int i = 0; i < 8; i++){
        if(user_timer == depature[i]){
            deptature_time = depature[i];
            arrival_time = arrival[i];
            break;
        }else if(depature[i] > user_timer && i > 0){
           deptature_time = depature[i - 1];
           arrival_time = arrival[i - 1];
           break;
        }
    }

    if(deptature_time == 0 && arrival_time == 0) return -1;

    unsigned int arriaval_hour = (arrival_time / 60) - 12;
    if(arriaval_hour == 0) arriaval_hour = 12;
    unsigned int arrival_min = (arrival_time % 60);

    unsigned int depature_hour = (deptature_time / 60) - 12;
    if(depature_hour == 0) depature_hour = 12;
    unsigned int depature_min = (deptature_time % 60);

    printf("Closest departure time is %.2u:%.2u ",depature_hour,depature_min);
    if((deptature_time/60) >= 12){
        putchar('p');
        putchar('.');
        putchar('m');
   }else {
       putchar('a');
       putchar('.');
       putchar('m');
   }

    printf(", arriving at %.2u:%.2u ",arriaval_hour,arrival_min);
    if((deptature_time/60) >= 12){
        putchar('p');
        putchar('.');
        putchar('m');
   }else {
       putchar('a');
       putchar('.');
       putchar('m');
   }

    printf("\n");
    return 0;
}
