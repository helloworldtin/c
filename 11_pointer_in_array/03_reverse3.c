#include <stdio.h>

#define N 10

int main(void)
{
    int a[N], *p;

    printf("Enter %d numbers: ", N);
    for(p = a; p < a + N; p++){
        scanf("%d", p);
    }
    // reverse
    for(p = a + (N - 1); p >= a ; p--){
        printf("%d ", *p);
    }
    putchar('\n');

    return 0;
}
