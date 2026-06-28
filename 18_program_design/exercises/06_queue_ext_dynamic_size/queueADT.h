#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>
#include <stdlib.h>

typedef struct queue_type *Queue;
typedef int Item;

Queue create(size_t size);
void enqueue(Queue q, Item element);
void dequeue(Queue q);
Item get_first_element(Queue q);
Item get_last_element(Queue q);
bool is_empty(Queue q);
void destroy(Queue q);

#endif
