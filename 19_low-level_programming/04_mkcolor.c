#include <stdio.h>

#define MK_COLOR(r, g, b) ((long) (b) << 16 | (g) << 8 | (r) )
#define GET_RED(color) ((color) & ((1 << 8) -1 ))
#define GET_GREEN(color) ((color) & ( ((((1 << 8) - 1) << 8))) >> 8 )
#define GET_BLUE(color) ((color) & ( ((((1 << 8) - 1) << 16))) >> 16 )

#define PRINT_INT(x) printf("%ld\n", x);


int main(void)
{
    long  result = MK_COLOR(24, 12, 7);
    PRINT_INT(result);
    long red = GET_RED(result);
    long green = GET_GREEN(result);
    long blue = GET_BLUE(result);
    PRINT_INT(red);
    PRINT_INT(green);
    PRINT_INT(blue)
    return 0;
}
