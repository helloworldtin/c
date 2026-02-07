/*Write a program that computes the factorial of a positive integer:
Enter a positive integer: 6
F a c t o r i a l o f 6 : 7 2 0
(a) Use a s h o r t variable to store the value of the factorial. What is the largest value of n
for which the program correctly prints the factorial of n?
(b) Repeat part (a), using an i n t variable instead
(c) Repeat part (a), using a long variable instead.
(d) Repeat part (a), using a long long variable instead (if your compiler supports the
l o n g long type).
(e) Repeat part (a), using a fl o a t variable instead.
(f) Repeat part (a), using a double variable instead
(g) Repeat part (a), using a long double variable instead.
In cases (e)-(g), the program will display a close approximation of the factorial, not neces-
sarily the exact value. */

#include <stdio.h>

int main(void){
    unsigned int number;
    printf("Enter a postive integers: ");
    scanf("%u",&number);
    unsigned int numbercpy = number;

    // short factorial = 1;
    // int factorial = 1;
    long factorial = 1;
    // this way try it all.

    while(number != 0){
       factorial *= number;
        number--;
    }
    printf("Facorial of %u is %ld\n",numbercpy,factorial);
    return 0;
}
