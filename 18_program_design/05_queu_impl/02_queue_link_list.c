#include <stdio.h>
#include <stdlib.h>
#include "../03_queue/queue.h"


struct node {
    int value;
    struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;

void enqueue(int element)
{
    struct node *new_node = malloc(sizeof(struct node));
    if(new_node == NULL){
        printf("Error in enqueue: Queue is full\n");
        exit(EXIT_FAILURE);
    }

    new_node->value = element;
    new_node->next = NULL;

    if(tail == NULL){
        head = new_node;
        tail = new_node;
        return;
    }

    tail->next = new_node;
    tail = new_node;
}

void dequeue(void)
{
    if(head == NULL){
        printf("Error in dequeue: Queue is empty");
        exit(EXIT_FAILURE);
    }
    struct node *old_head = head;
    head = head->next;
    free(old_head);
}

bool is_empty(void)
{
    return head == NULL;
}

int get_first_element(void)
{
    if(head == NULL){
        printf("Error in dequeue: Queue is empty");
        exit(EXIT_FAILURE);
    }

    return head->value;
}

int get_last_element(void)
{
    if(tail == NULL){
        printf("Error in dequeue: Queue is empty");
        exit(EXIT_FAILURE);
    }
    return tail->value;
}

static void print_queue()
{
    while (head != tail) {
        printf("%d ", head->value);
        head++;
    }
     printf("%d ", head->value);
    putchar('\n');
}

int main(void)
{
    enqueue(10);
    enqueue(89);
    enqueue(10);
    enqueue(349);
    return 0;
}
