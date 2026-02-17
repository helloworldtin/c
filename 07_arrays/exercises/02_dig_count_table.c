// Modify the r e p d i g i t . c program of Section 8.1 so that it prints a table showing how
// many times each digit appears in the number:
// Enter a number: 41271092
// Digit : 0 1 2 3 4 5 6 7 8 9
// Occurrences : 1 2 2 0 1 0 0 1 0 1



#include <stdio.h>

int main(void){
    int i;
    int number_freq[10] = {0};
    long int  number;

    printf("Enter the number: ");
    scanf("%ld",&number);

    while(number){
        int last_digit = number % 10;
        number_freq[last_digit] += 1;
        number = number / 10;
    }

    printf("Digit:           ");
    for(i = 0; i < 10; i++){
        printf("%d  ",i);
    }
    printf("\n");

    printf("Occurrences:     ");

    for(i = 0; i < 10; i++){
        printf("%d  ",number_freq[i]);
    }
    printf("\n");

    return 0;

}
