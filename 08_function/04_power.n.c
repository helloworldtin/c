#include <stdio.h>

int power_n(int x, int n); // function prototype

int main(void){
    int res = power_n(2, 5);

    printf("%d\n",res);
    return 0;
}

int power_n(int x, int n){ // function definition
    int res = 1;
    while(n-- > 0){
        res *= x;
    }
    return res;
}
