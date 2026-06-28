#include <stdio.h>
#include "queueADT.h"

struct node {
    int value;
    struct node *next;
};

struct queue_type {
    struct node *head;
    struct node *tail;
};

static void print_queue(Queue q)
{
    while (q->head != q->tail) {
        printf("%d ", q->head->value);
        q->head++;
    }
     printf("%d ", q->head->value);
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
    print_queue(q);
    destroy(q);

    enqueue(q2,0);
    enqueue(q2, 9);
    enqueue(q2, 1);
    dequeue(q2);
    print_queue(q2);
    destroy(q2);
    return 0;
}
