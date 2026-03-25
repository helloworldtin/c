// The following (rather confusing) function finds the median of three numbers. Rewrite the
// function so that it has just one return statement.


// double median(double x, double y, double z){
//    if( x <= y) {
//        if(y <= z) return y;
//        else if(x <= z) return z;
//        else return x;
//    }
//
//    if( z <= y) return y;
//    if(x <= z) return x;
//    return z;
// }

#include <stdio.h>


double median(double x, double y, double z);

int main(void)
{
    double res = median(8,7,10);
    printf("The result is: %lf\n", res);
}

double median(double x, double y, double z)
{
    double res;
    if(x <= y){
        if(y <= z) res =  y;
        else if(z <= x) res =  z;
        res =  x;
    }
    if(z <= y) res = y;
    if(x <= z) res = x;
    else  res = z;

    return res;
    // return x <= y? y <= z ? y : z <=z ? z : x : z <= y ? y : x <= z? x : z;
}
