#include <stdio.h>
#include "stackADT3.h"

#define PRINT_STACK_LEN(x) printf("The length of stack is %d\n", x)

int main(void)
{
    Stack s = create(100);

    push(s, 10);
    PRINT_STACK_LEN(length(s));

    push(s, 20);
    push(s, 30);
    push(s, 40);
    PRINT_STACK_LEN(length(s));

    pop(s);
    PRINT_STACK_LEN(length(s));

    return 0;
}
