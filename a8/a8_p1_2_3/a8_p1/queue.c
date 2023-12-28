/**
 * @file queue.c
 */
/*
  CH-230-A
  a8_p2.c
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */
#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
    pq->front = pq->rear = NULL;
    pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
    return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
    return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
    return pq->items;
}

int enqueue(Item item, Queue *pq)
{
    if(queue_is_full(pq))
        return -1;
//if the queue is full the function will return -1 and it will stop
    Node *p;
    p=(Node*)malloc(sizeof(Node));
    if(p==NULL)
        return -1;
//we check if the memory attribution was successful
    p->item=item;
    p->next=NULL;
    if(queue_is_empty(pq))
    {
//if the queue is empty it means that p is the first element
        pq->front=p;
        pq->items++;
    }
//otherwise we link p to the rear element
    else
    {
        pq->rear->next=p;
        pq->items++;
    }
    pq->rear=p;
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
    if(queue_is_empty(pq))
        return -1;
//if the queue is empty the function will return -1 and it will stop
    Node *p;
    p=(Node*)malloc(sizeof(Node));
    if(p==NULL)
        return -1;
//we check if the memory attribution was successful
    *pitem=pq->front->item;
    p=pq->front;
//we set the item to the waiting variable
    pq->front=pq->front->next;
//we reset the first pointer to the next item in queue
    free(p);
    pq->items--;
//we free the memory occupied by p and decrement the number of elements
    if(pq->items==0)
//the element that we deleted was the last one in queue
//so we have to reset the front and rear pointers
        pq->front=pq->rear=NULL;
    return 0;
}

void empty_queue(Queue *pq)
{
    Item dummy;
    while (!queue_is_empty(pq))
        dequeue(&dummy, pq);
}

void printq(Queue *pq)
{
    Node *fifo;
    fifo=(Node*)malloc(sizeof(Node));
    if(fifo==NULL)
        printf("Error");
//we check if the memory attribution was successful
    fifo=pq->front;
    while(fifo!=NULL)
    {
        printf("%d ", fifo->item);
        fifo=fifo->next;
    }
    printf("\n");
}

