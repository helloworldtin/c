#include <stdio.h>

void encrypt(char *message, int shift);


int main(void){
    char message[] = "I am pretty dumb";
    int shift_count = 10;
    encrypt(message, shift_count);
    puts(message);
}

void encrypt(char *message, int shift)
{
    while(*message){
        if(*message >= 'a' && *message <= 'z'){
            *message = ((*message - 'a') + shift) % 26 + 'a';
        }else if (*message >= 'A' && *message <= 'Z'){
            *message = ((*message - 'A') + shift) % 26 + 'A';
        }
        message++;
    }
}
