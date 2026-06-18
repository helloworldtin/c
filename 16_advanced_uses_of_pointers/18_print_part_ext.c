#include <stdio.h>
#define NAME_LEN 100
struct part {
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
};

void print_part(struct part *p)
{
    printf("Part Number: %d\n", p->number);
    printf("Part name: %s\n",p->name);
    printf("Quantity on hand: %d\n",p->on_hand);
}

int main(void)
{
    struct part part = {
        .name = "hello world",
        .number = 10,
        .on_hand = 109,
    };

    print_part(&part);
    return 0;
}
