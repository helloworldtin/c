// Modify Programming Project 4 from Chapter 7 so that the program labels its output:
// E n t e r p h o n e n u m b e r : 1-800-COL-LECT
// In n u m e r i c f o r m : 1-800-265-5328
// The program will need to store the phone number (either in its original form or in its
// numeric form) in an array of characters until it can be printed. You may assume that the
// phone number is no more than 15 characters long.

#include <stdio.h>

#define N 15

int main(void){
    printf("Enter phone number: ");
    char number[N];

    int i = 0;

    for(;;){
        char ch = getchar();
        if(ch == '\n') break;
        if(ch >= 'A' && ch < 'Z'){
           if(ch >= 'A' && ch <= 'C')  {
               ch = 50; // 2 in ASCII
           }else if(ch == 'D' ||ch == 'E' || ch == 'F' ){
               ch = 51; // 3 in ASCII
           }else if(ch == 'G' || ch == 'H' || ch == 'I'){
               ch = 52;
           }else if(ch == 'J' || ch == 'K' || ch == 'L'){
               ch = 53;
           }else if (ch == 'M' || ch == 'N' || ch == 'O'){
               ch = 54;
           }else if(ch == 'P' || ch == 'Q' || ch == 'R' ){
               ch = 55;
           }else if (ch == 'S' || ch == 'T' || ch == 'U'){
               ch = 56;
           }else {
               ch = 57;
           }
        }
        number[i++] = ch;
    }
    for(i = 0; i < N; i++){
        putchar(number[i]);
    }
    putchar('\n');
    return 0;
}
