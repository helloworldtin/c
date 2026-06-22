#include <stdlib.h>
int (*f(float (*)(long), char *))(double);

/*(a). solution
 * -> F is the pointer to function which take an function pointer
 * as an argument in which the argument function take the function which
 * take long as the argument and return float and another to the pointer to char
 * and f take the double as it's argument and return int value;
 */


int main(void)
{
    float hello(long h);
    char *ptr = malloc(sizeof(char));
    f(hello,ptr);
    return 0;
}
