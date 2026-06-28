#include <stdio.h>
#include <stdlib.h>
#include "queueADT.h"

struct queue_type {
    int empty_pos;
    int last_to_remove;
    int size;
    int contents[QUEUE_SIZE];
};

static void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

Queue create(){
    Queue q = malloc(sizeof(struct queue_type));
    q->size = 0;
    q->last_to_remove = 0;
    q->empty_pos = 0;
    return q;
}

void enqueue(Queue q, int element)
{
    if(q->size == QUEUE_SIZE)
        terminate("Error in Queue: Queue is full");

    q->contents[q->empty_pos++] = element;

    if(q->empty_pos == QUEUE_SIZE)
        q->empty_pos = 0;
    q->size++;
}

void dequeue(Queue q)
{
    if(is_empty(q))
        terminate("Error in dequeue: Queue is empty");

    q->last_to_remove++;
    if(q->last_to_remove == QUEUE_SIZE)
        q->last_to_remove = 0;
    q->size--;
}

int get_first_element(Queue q)
{
    if(is_empty(q))
        terminate("Error in dequeue: Queue is empty");
    return q->contents[q->last_to_remove];
}

int get_last_element(Queue q)
{
    if(is_empty(q))
        terminate("Error in dequeue: Queue is empty");

    int last_pos = q->empty_pos -1;

    if(last_pos < 0)
        last_pos = QUEUE_SIZE - 1;
    return q->contents[last_pos];
}

bool is_empty(Queue q)
{
    return q->size == 0;
}

void destroy(Queue q)
{
    free(q);
}
