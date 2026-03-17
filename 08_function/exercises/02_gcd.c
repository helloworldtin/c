// Write a function gcd (m, n) that calculates the greatest common divisor of the integers m
// and n. (Programming Project 2 in Chapter 6 describes Euclid's algorithm for computing the
// GCD.)

#include <stdio.h>

int gcd(int m, int n);

int main(void){

    int res = gcd(10,15);
    printf("Result is = %d\n", res);
    return 0;
}

int gcd(int m, int n){
    while(m > 0 && n > 0){
        if(m > n){
            m = m % n;
        }else{
            n = n % m;
        }
    }
    if(m == 0) return n;
    return m;
}
