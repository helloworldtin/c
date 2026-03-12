#include <stdio.h>

int power(int x, int n);

int main(void){
    int res = power(3,5);
    printf("The 3 power 5 is %d\n",res);
    return 0;
}

int power(int x, int n){
    if(n == 0) return 1;
    return n * power(x, n - 1);
}
