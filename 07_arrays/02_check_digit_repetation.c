#include <stdio.h>
#include <stdbool.h>


int main(void){
    long digit;
    printf("Enter the digit: ");
    scanf("%ld",&digit);

    bool seen_digit[10]  = {false};

    while(digit > 0){
        int last_digit = digit % 10;
        digit /= 10;

        if(seen_digit[last_digit] == true){
            printf("The %d digit is repeating\n",last_digit);
            return 0;
        }else {
            seen_digit[last_digit] = true;
        }
    }
    printf("All the digits are singly.\n");
    return 0;
}
