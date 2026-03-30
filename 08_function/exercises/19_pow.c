// The power function of Section 9.6 can be made faster by having it calculate x" in a differ-
// ent way. We first notice that if n is a power of 2, then x" can be computed by squaring. For
// example, xt is the square of t?, so x' can be computed using only two multiplications instead
// of three. As it happens, this technique can be used even when n is not a power of 2. If n is
// even, we use the formula x" = (x"3)?. If n is odd, then x" = xxx"-| Wr i t e a recursive fune-
// tion that computes x". (The recursion ends when n = 0, in which case the function returns 1.)
// To test your function, write a program that asks the user to enter values for x and n, calls
// power to compute x", and then displays the value returned by the function.

#include<stdio.h>

int my_pow(int x , int n);

int main(){
    int res = my_pow(3,4);
    printf("%d",res);

}

int my_pow(int x , int n){
    if(n == 0) return 1;

    if(n % 2 == 0){
        return my_pow(x , n / 2) * my_pow(x , n / 2 );
    }else{
        return x* my_pow(x , n - 1);
    }
}
