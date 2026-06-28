#include <stdio.h>
#include <stdlib.h>
#include "../03_queue/queue.h"

#define QUEUE_SIZE 100

int empty_pos = 0;
int last_to_remove = 0;
int size = 0;
int contents[QUEUE_SIZE];

static void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

void enqueue(int element)
{
    if(size == QUEUE_SIZE)
        terminate("Error in Queue: Queue is full");

    contents[empty_pos] = element;
    empty_pos++;

    if(empty_pos == QUEUE_SIZE)
        empty_pos = 0;
    size++;
}

void dequeue(void)
{
    if(is_empty())
        terminate("Error in dequeue: Queue is empty");

    last_to_remove++;
    if(last_to_remove == QUEUE_SIZE)
        last_to_remove = 0;
    size--;
}

int get_first_element(void)
{
    if(is_empty())
        terminate("Error in dequeue: Queue is empty");
    return contents[last_to_remove];
}

int get_last_element(void)
{
    if(is_empty())
        terminate("Error in dequeue: Queue is empty");

    int last_pos = empty_pos -1;

    if(last_pos < 0)
        last_pos = QUEUE_SIZE - 1;
    return contents[last_pos];
}

bool is_empty(void)
{
    return size == 0;
}

static void print_stack()
{
    int i;
    for(i = last_to_remove; i < empty_pos; i++){
        printf("%d ", contents[i]);
    }
    putchar('\n');
}

int main(void)
{
    enqueue(100);
    enqueue(90);
    enqueue(10);
    dequeue();
    return 0;
}
