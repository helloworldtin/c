#include <math.h>
#include <stdio.h>

#define DISP(f,x) printf(#f"(%g) = %g\n",x, f(x))
#define DISP2(f,x,y) printf(#f"(%g,%g) = %g\n",x,y, f(x,y))

double add(double a, double b)
{
  return a + b;
}

int main(int argc, char *argv[])
{
    DISP(sqrt, 90.0);
    DISP2(add, 10.4, 10.4);

    return 0;
}
