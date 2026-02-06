#include <ctype.h>
#include <stdio.h>

int main(void){

    printf("Enter your time in 12 hrs format: ");
    int hour, min;
    char ch;

    scanf(" %d : %d  %c",&hour, &min,&ch);

    ch = tolower(ch);

    if(ch =='p' && hour != 12 ){
        hour += 12;
    }else {
        hour = 0;
    }

    printf("The time in 24 hour format is %d:%d",hour,min);

    return 0;
}
