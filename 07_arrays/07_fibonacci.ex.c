/* The Fibonacci numbers are 0, 1, 1, 2, 3, 5, 8, 13, ..., where each number is the sum of the
two preceding numbers. Write a program fragment that declares an array named
fi b numbers of length 40 and fills the array with the first 40 Fibonacci numbers. Hint:
Fill in the first two numbers individually, then use a loop to compute the remaining num-
b e r s . */

#include <stdio.h>

int main(void){
    long fib_numbers[40] = {0,1};

    const int size = sizeof(fib_numbers) / sizeof(*fib_numbers);

    for(int i = 2; i < size; i++){
       fib_numbers[i] = fib_numbers[i - 2] + fib_numbers[i - 1];
    }
    for(int i = 0; i < size; i++){
        printf("%ld ",fib_numbers[i]);
    }
    printf("\n");
    return 0;
}
