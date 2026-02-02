// Write a program that translates an alphabetic phone number into numeric form:
// E n t e r phone number: CALLATT
// 2 2 5 5 2 8 8
// (In case you don't have a telephone nearby, here are the letters on the keys: 2=ABC, 3=DEF,
// 4=GHI, 5-JKL, 6=MNO, 7=PRS, 8=TUV, 9=WXY.) If the original phone number contains
// nonalphabetic characters (digits or punctuation, for example), leave them unchanged:
// Enter phone number: 1-800-COL-LECT
// 1 - 8 0 0 - 2 6 5 - 5 3 2 8
// You may assume that any letters entered by the user are upper case.

#include <stdio.h>

int main(void){
    printf("Enter phone number: ");

    long int ans = 0;
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
        putchar(ch);
    }
    putchar('\n');

    return 0;
}
