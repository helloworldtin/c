#include <stdio.h>
#include <stddef.h>


struct s {
    char a;
    int b;
    char c;
};

int main(void)
{
    printf("Structure size: %zu bytes\n\n", sizeof(struct s));
    printf("Member\tSize\tOffset\n");
    printf("-------------------------\n");
    printf("a\t%zu\t%zu\n", sizeof(((struct s *)0)->a), offsetof(struct s, a));
    printf("b\t%zu\t%zu\n", sizeof(((struct s *)0)->b), offsetof(struct s, b));
    printf("c\t%zu\t%zu\n", sizeof(((struct s *)0)->c), offsetof(struct s, c));
    return 0;
}
