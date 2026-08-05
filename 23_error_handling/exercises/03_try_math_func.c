#include <errno.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// b
#define TRY_MATH_FNC(f,x) try_math_fnc(f,x,"Error in call of" #f);

//a 
double try_math_fnc(double (*f)(double), double x, const char *msg)
{
    double result;
    errno = 0;

    // we need to wrap *f with parenthesis because *f has
    // lower precident than function call.
    // result = (*f)(x)
    result = f(x);
    if(errno != 0) {
        perror(msg);
        exit(EXIT_FAILURE);
    }
    
    return result;
}

int main(void)
{
    double result = try_math_fnc(sqrt, -1019238457129387401295, "Cann't find square root of given value");
    printf("The result value is %.3f\n", result);
    return 0;
}
