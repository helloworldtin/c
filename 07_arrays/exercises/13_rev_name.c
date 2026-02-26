// Modify Programming Project 11 from Chapter 7 so that the program labels its output:
// Enter a fi r s t and l a s t name: Lloyd Fosdick
// You e n t e r e d the name: Fosdick, L.
// The program will need to store the last name (but not the first name) in an array of characters
// until it can be printed. You may assume that the last name is no more than 20 characters long.


#include <stdio.h>

int main(void){

    char last_name[21];

    printf("Enter your first and last name: ");
    char first_name_first_letter;

    char ch = getchar();
    // ignoring the first empty spaces.
    while(ch == ' ') {
        ch = getchar();
    }
    first_name_first_letter = ch;
    while(ch != ' '){
        ch = getchar();
    }

    // ignoring the space in the middle part
    while(ch == ' '){
        ch = getchar();
    }
    int i = 0;
    // storing the last name in the array.
    while(ch != ' ' && ch != '\n'){
        last_name[i++] = ch;
        ch = getchar();
    }
    last_name[i] = '\n';

    for(int i = 0; i < 20; i++){
        if(last_name[i] == '\n') break;
        putchar(last_name[i]);
    }
    printf(", %c\n",first_name_first_letter);
    return 0;
}
