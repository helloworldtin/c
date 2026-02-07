// Write a program that uses Newton's method to compute the square root of a positive float-
// ing-point number:
// E n t e r a p o s i t i v e n u m b e r : 3
// S q u a r e r o o t : 1 . 7 3 2 0 5
// Let x be the number entered by the user. Newton's method requires an initial guess y for the
// square root of x (we'll use y = 1). Successive guesses are found by computing the average of
// y and x/y. The following table shows how the square root of 3 would be found:
// Average of
// x/y y and x/y
// 3 1 3 2
// 2 1.5 1.75
// 1.75 1.71429 1.73214
// 1.73214 1.73196 1.73205
// 3 1.73205 1.73205 1.73205
// Note that the values of y get progressively closer to the true square root of x. For greater
// accuracy, your program should use variables of type double rather than fl o a t . Have the
// program terminate when the absolute value of the difference between the old value of y and
// the new value of y is less than the product of .00001 and y. Hint: Call the fabs function to
// find the absolute value of a d o u b l e . (You'll need to include the <math. h> header at the
// beginning of your program in order to use fabs.)


#include <stdio.h>
#include <math.h>


int  main(void){
    printf("Enter the positive number: ");
    unsigned int x;
    scanf("%u",&x);

    double prev_y = 0;
    double y = 1;

    while(fabs(y - prev_y) > ( y * 0.00001)){
        prev_y = y;
        y = x / y;
        y = ( y + prev_y) / 2;
    }

    printf("Square Root: %lf\n",y);

    return 0;
}
