#include <stdio.h>

int main(void){
    char ch;
    int len  = 0;
    printf("Enter the message: ");
    ch = getchar();

    while(ch != '\n'){
        len++;
        ch = getchar();
    }
    printf("You message is %d character(s) long.\n",len);
    return 0;
}
