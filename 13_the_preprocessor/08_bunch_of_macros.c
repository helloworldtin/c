#include <stdio.h>

#define PRINT_INT(x) printf("%d\n", x)

#define CHECK(x,y,n) ((x) >= 0 && (x) <= (n) - 1)&&((y) >= 0 && (y) <= (n) - 1) ? 1 : 0
#define MEDIAN(a,b,c) ( (( (a) >= (b) ) && ( a <= c ) ) ||( ( (a) >= (c) ) && ( (a) <= (b) ) ) ) ? (a) : ( ( ( (b) >= (c) ) && ( (b) <= (a) ) ) || ( (b) >= (a) ) && ( (b) <= (c) ) ) ? (b) : (c)
#define POLYNOMIAL(x) (3 * (x) * (x) * (x) * (x) * (x)) + (2 * (x) * (x) * (x) * (x)) - (5 * (x) * (x) * (x)) - ((x) * (x)) - 6

int median(int x, int y, int z){
    if(x <= y){
        // x <= y && y <= z
        if( y <= z) return y;
        // x <= y && x <= z
        else if(x <= z) return z;
        // x <= y && y > z || x > z
        else return x;
    }
    // x > y && z <= y
    if(z <= y ) return y;
    // x > y && z > y && z <= z
    if(x <= z) return x;

    // x > y && x > z && z > y && x > z
    return z;
}

int median2(int a, int b, int c){
    if((a >= b && a <= c) || (a >= c && a <= b))
        return a;
    else if((b >= a && b <= c) || (b >= c  && b <= a))
        return b;
    return c;
}

int main(int argc, char *argv[])
{
    int value = CHECK(1,2,5);
    PRINT_INT(value);

    int val2 = MEDIAN(1,2,5);
    PRINT_INT(val2);

    int val3 = POLYNOMIAL(5);
    PRINT_INT(val3);

    return 0;
}
