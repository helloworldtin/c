#include <stdio.h>
#include <stdlib.h>
#include "queueADT.h"

struct node {
    int value;
    struct node *next;
};

struct queue_type {
    struct node *head;
    struct node *tail;
};

Queue create()
{
    Queue q = malloc(sizeof(struct queue_type));
    q->head = NULL;
    q->tail = NULL;

    return q;
}

void enqueue(Queue q, int element)
{
    struct node *new_node = malloc(sizeof(struct node));
    if(new_node == NULL){
        printf("Error in enqueue: Queue is full\n");
        exit(EXIT_FAILURE);
    }

    new_node->value = element;
    new_node->next = NULL;

    if(q->tail == NULL){
        q->head = new_node;
        q->tail = new_node;
        return;
    }

    q->tail->next = new_node;
    q->tail = new_node;
}

void dequeue(Queue q)
{
    if(q->head == NULL){
        printf("Error in dequeue: Queue is empty");
        exit(EXIT_FAILURE);
    }
    struct node *old_head = q->head;
    q->head = q->head->next;
    free(old_head);
}

bool is_empty(Queue q)
{
    return q->head == NULL;
}

int get_first_element(Queue q)
{
    if(q->head == NULL){
        printf("Error in dequeue: Queue is empty");
        exit(EXIT_FAILURE);
    }

    return q->head->value;
}

int get_last_element(Queue q)
{
    if(q->tail == NULL){
        printf("Error in dequeue: Queue is empty");
        exit(EXIT_FAILURE);
    }
    return q->tail->value;
}



void make_empty(Queue q){
    if(q->head == NULL) return;

    while(q->head != q->tail)
        dequeue(q);
    dequeue(q);
}

void destroy(Queue q)
{
    free(q->head);
    free(q->tail);
}
