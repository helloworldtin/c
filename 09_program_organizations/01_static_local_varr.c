#include <stdio.h>


void f()
{
    static int i; /* Static local variable. */
}

void print_hell(){
    // it will initialize as zero
    // every time function is called.
    int i = 0;

    // but it will reused previously
    // initialized variable.
    static int j = 0;

    printf("The value of i is %d\n", i);
    printf("The value of j is %d\n", j);
    i++;
    j++;
}

int main(void)
{
    print_hell();
    print_hell();
    print_hell();
}
