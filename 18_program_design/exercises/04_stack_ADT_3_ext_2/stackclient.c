#include <stdio.h>
#include "stackADT3.h"

int main(void)
{
    Stack s1, s2;

    char *first_name = "hello";
    char *las_name = "world";

    s1 = create(100);
    s2 = create(100);

    push(s1, first_name);
    push(s2, las_name);

    puts((char *)pop(s1));
    puts((char *)pop(s2));

    destroy(s1);
    destroy(s2);
    return 0;
}
