#include <stdio.h>


void reverse(char *message);

int main(void){
    char str[] = "hello";
    reverse(str);
    puts(str);
    return 0;
}

void reverse(char *message)
{
    char *initial_position = message;

    while(*message)
        message++;

    message = message - 1;
    while(initial_position < message){
        char temp = *initial_position;
        *initial_position = *message;
        *message = temp;
        initial_position++;
        message--;
    }
}
