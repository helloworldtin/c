#include <stdio.h>
#include <stdlib.h>

void print_1(void)
{
    printf("That's all,");

}
void print_2(void)
{
    printf("folks\n");    
}

int main(void)
{
    atexit(print_2);
    atexit(print_1);
    
    printf("The is before program termination\n");
    return 0;
}
