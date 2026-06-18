#include <stdio.h>
#include <stdlib.h>

struct point {
    int x;
    int y;
};

struct rectangle {
    struct point upper_left;
    struct point lower_right;
};


int main(void)
{
    struct rectangle *p;

    p = malloc(sizeof(struct rectangle));

    if(p == NULL){
        printf("Error: malloc cannot allocate this much space\n");
        exit(EXIT_FAILURE);
    }

    struct point u = {.x = 10, .y = 25};
    struct point d = {.x = 20, .y = 15};
    p->upper_left = u;
    p->lower_right = d;

    p->upper_left = (struct point){.x = 10, .y = 25};
    p->upper_left = (struct point) {.x = 20, .y = 15};

    return 0;
}
