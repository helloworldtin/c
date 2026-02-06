// Write a program that takes a first name and last name entered by the user and displays the
// last name, a comma, and the first initial, followed by a period:
// Enter a first and last name : Lloyd Fosdick
// Fosdick, L.
// The user's input may contain extra spaces before the first name, between the first and last
// names, and after the last name.

#include <stdio.h>

int main(void){

    printf("Enter your first and last name: ");
    char first_name_first_latter;

    char ch = getchar();
    // ignoring the first empty spaces.
    while(ch == ' ') {
        ch = getchar();
    }
    first_name_first_latter = ch;
    while(ch != ' '){
        ch = getchar();
    }

    // ignoring the space in the middle part
    while(ch == ' '){
        ch = getchar();
    }
    // printing the last name
    while(ch != ' ' && ch != '\n'){
        putchar(ch);
        ch = getchar();
    }
    printf(", %c\n",first_name_first_latter);
    return 0;
}
