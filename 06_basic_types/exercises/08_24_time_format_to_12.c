// Modify Programming Project 8 from Chapter 5 so that the user enters a time using the 12-
// hour clock. The input will have the form hours: minutes followed by either A, P, AM, or PM
// (either lower-case or upper-case). White space is allowed (but not required) between the
// numerical time and the AM/PM indicator. Examples of valid input:
// 1 : 1 5 ₽
// 1: 1 5 P M
// 1:15p
// 1 : 1 5 p m
// 1 : 1 5 ₽
// 1 : 1 5 PM
// 1 : 1 5 P
// 1 : 1 5 pm
// You may assume that the input has one of these forms; there is no need to test for errors.

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
