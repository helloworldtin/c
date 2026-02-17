// Modify the repdigit. c program of Section 8.1 so that the user can enter more than one
// number to be tested for repeated digits. The program should terminate when the user enters
// a number that's less than or equal to 0.

#include <stdio.h>
#include <stdbool.h>


int main(void){

    long digit;
    bool seen_digit[10]  = {false};

    do{
        printf("Enter the digit: ");
        scanf("%ld",&digit);

        if(digit <= 0) break;
        long digit_cpy = digit;
        while(digit_cpy > 0){
            int last_digit = digit_cpy % 10;
            digit_cpy /= 10;

            if(seen_digit[last_digit] == true){
                printf("The %d digit is repeating\n",last_digit);
                break;
            }else {
                seen_digit[last_digit] = true;
            }
        }
    }while(digit > 0);

    return 0;
}
