#include <stdio.h>
#include <stdlib.h>
#include "queueADT.h"

struct queue_type {
    int empty_pos;
    int last_to_remove;
    int size;
    int max_size;
    int *contents;
};

static void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

Queue create(size_t size){
    Queue q = malloc(sizeof(struct queue_type));
    if(q == NULL)
        terminate("Error in create: Unable to allocate memory");

    q->contents = malloc(size * sizeof(Item));
    if(q->contents == NULL)
        terminate("Error in create: Unable to allocate memory");

    q->size = 0;
    q->last_to_remove = 0;
    q->empty_pos = 0;
    q->max_size = size;

    return q;
}

void enqueue(Queue q, int element)
{
    if(q->size == q->max_size)
        terminate("Error in Queue: Queue is full");

    q->contents[q->empty_pos++] = element;

    if(q->empty_pos == q->max_size)
        q->empty_pos = 0;
    q->size++;
}

void dequeue(Queue q)
{
    if(is_empty(q))
        terminate("Error in dequeue: Queue is empty");

    q->last_to_remove++;
    if(q->last_to_remove == q->max_size)
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
        last_pos = q->max_size - 1;
    return q->contents[last_pos];
}

bool is_empty(Queue q)
{
    return q->size == 0;
}

void destroy(Queue q)
{
    free(q->contents);
    free(q);
}
