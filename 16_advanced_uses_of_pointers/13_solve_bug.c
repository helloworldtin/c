#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;           /* data store in that node */
    struct node *next;   /* pointer to the next node */
};

int main(void)
{
    struct node *list = NULL;
    struct node *p;
    struct node *f;

    for(p = list, f = list; p != NULL; p = p -> next){
        f = p;
        free(f);
    }

    return 0;

}
