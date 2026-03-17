// Write a function num d i g i t s (n) that returns the number of digits in n (a positive inte-
// ger). Hint: To determine the number of digits in a number n, divide it by 10 repeatedly.
// When n reaches 0, the number of divisions indicates how many digits n originally had.

#include <stdio.h>
#include <assert.h>

int num_digits(int n);

int main(void)
{
    int res = num_digits(100);
    printf("%d\n", res);
    return 0;
}

int num_digits(int n)
{
    assert(n > 0);
    int count = 0;
    while(n != 0){
        n /= 10;
        count++;
    }
    return count;
}
