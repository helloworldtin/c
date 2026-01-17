#include <stdio.h>

int main(void){
    int len = 0;

    printf("Enter you message: ");
    while(getchar() != '\n'){
        len++;
    }
    printf("You message length is %d.\n",len);
}
