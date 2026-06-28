#ifndef QUEUE_H
#define QUEUE_H
#define QUEUE_SIZE 100

#include <stdbool.h>

typedef struct{
    int empty_pos;
    int last_to_remove;
    int size;
    int contents[QUEUE_SIZE];
} Queue;

void enqueue(Queue *q, int element);
void dequeue(Queue *q);
int get_first_element(Queue *q);
int get_last_element(Queue *q);
bool is_empty(Queue *q);

#endif
