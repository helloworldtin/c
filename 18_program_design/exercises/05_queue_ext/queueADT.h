#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>
#define QUEUE_SIZE 100


typedef struct queue_type *Queue;

Queue create();
void enqueue(Queue q, int element);
void dequeue(Queue q);
int get_first_element(Queue q);
int get_last_element(Queue q);
bool is_empty(Queue q);
void destroy(Queue q);

#endif
