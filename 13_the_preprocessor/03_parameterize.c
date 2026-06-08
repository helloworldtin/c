#include <stdio.h>

#define CUBE(x) ((x)*(x)*(x))
#define  REMAINDER(n) ((n)%4)
#define  IS_CORRECT_PRODUCT(x,y) ((x) * (y) < 100 ? 1 : 0)

int main(void)
{
    int result = CUBE('8');
    printf("%d\n", result);

    int result1 = REMAINDER(4);
    printf("%d\n", result1);

    int x = 200;
    int y = 3;

    int result2 = IS_CORRECT_PRODUCT(x, y);
    printf("%d\n", result2);

    return 0;
}
