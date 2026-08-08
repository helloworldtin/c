#include <stdio.h>
#include <time.h>

int main(void)
{
    int i;
    clock_t start_clock = clock();

    for(i = 0; i < 1000000; i++) {
        // 
    }
    

    printf("Processor time used: %g sec.\n", (clock() - start_clock / (double) CLOCKS_PER_SEC));
    return 0;
}
