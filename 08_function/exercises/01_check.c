// Write a function check (x, y , n) that returns 1 if both x and y fall between 0 and n - 1,
// inclusive. The function should return 0 otherwise. Assume that x, y, and n are all of type
// int .

#include <stdio.h>

int check(int x, int y, int n);

int main(void){
    int res = check(3, 0, 4);
    printf("result1 = %d\n", res);

    int res2 = check(3, 3, 1);
    printf("result2 = %d\n", res2);
}

int check(int x, int y, int n){
    if((x >= 0 && x < n) && (y >= 0 && y < n)){
        return 1;
    }
    return 0;
}
