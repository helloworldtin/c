#include <stdio.h>
#define MAC_OS

int main(void)
{
    #if DEBUG
    // code to run for debugging purpose only.
    #endif

    // define operator check where the macros is
    // exist in program or not.
    #if defined(DEBUG)
    int i, j;
    printf("Value of i: %d\n", i);
    printf("Value of j: %d\n", j);
    #endif

    #ifdef DEBUG
    printf("The macros DEBUG is exist\n");
    #endif

    #ifndef DEBUG
    // runs the code if the debug is not defined.
    // the ifdef = #if defined(macro) they are same
    // we can add !defined() for #ifndef
    #endif
    // elseif and else directive
    #if defined(WIN32)
    printf("This code is running in windows machine\n");
    #elif defined(MAC_OS)
    printf("This code is running in macos machine\n");
    #elif defined(LINUX)
    printf("This code is running in linux machine");
    #else
    #error there is nor opreating system defined.
    #endif

    // temporary disabling the code.
    #if 0
    int max = 10; /* i am pretty best */
    #endif

    return 0;
}
