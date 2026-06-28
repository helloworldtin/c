#include <stdio.h>
#include "queueADT.h"

struct queue_type {
    int empty_pos;
    int last_to_remove;
    int size;
    int contents[QUEUE_SIZE];
};

static void print_stack(Queue q)
{
    int i;
    for(i = q->last_to_remove; i < q->empty_pos; i++){
        printf("%d ", q->contents[i]);
    }
    putchar('\n');
}

int main(void)
{
    Queue q = create();
    Queue q2 = create();

    enqueue(q,100);
    enqueue(q, 90);
    enqueue(q, 10);
    dequeue(q);
    print_stack(q);
    destroy(q);

    enqueue(q2,0);
    enqueue(q2, 9);
    enqueue(q2, 1);
    dequeue(q2);
    print_stack(q2);
    destroy(q2);
    return 0;
}
