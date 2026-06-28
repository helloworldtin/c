#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

void enqueue(int element);
void dequeue(void);
int get_first_element(void);
int get_last_element(void);
bool is_empty(void);

#endif
