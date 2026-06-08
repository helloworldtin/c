#include <stdio.h>

#define ERROR(index) fprintf(stderr, "Range error: index = %d\n", index)

int main(void)
{
    ERROR(8);
    return 0;
}
