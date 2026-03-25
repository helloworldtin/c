// Rewrite the fact function so that it's no longer recursive.

#include <stdio.h>

int fact(int n);

int main(void){
    int res = fact(4);
    printf("The res is %d\n", res);
    return 0;
}

int fact (int n){
    int num = 1;

    for(int i = 1; i <= n; i++){
        num = num * i;
    }
    return num;
}
