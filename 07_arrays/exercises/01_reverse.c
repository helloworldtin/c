#include <stdio.h>

// Modify the repdigit. c program of Section 8.1 so that it shows which digits (if any)
// were repeated:
// Enter a number : 939577
// Repeate  digit(s) : 79

int main(void){
    int number_freq[10] = {0};
    long int  number;

    printf("Enter the number: ");
    scanf("%ld",&number);

    while(number){
        int last_digit = number % 10;
        number_freq[last_digit] += 1;
        number = number / 10;
    }

    printf("Repeated digits(s): ");
    for(int i = 0; i < 10; i++){
        if(number_freq[i] > 1){
            printf("%d ",i);
        }
    }
    printf("\n");

    return 0;
}
