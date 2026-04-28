#include <stdio.h>
#include "queue.h"

void enqueue(queue* q, int data)
{
    if(q->rear == 9)
    {
        printf("queue is full \n");
        return;
    }
    if(q->front == -1)
    {
        q->front++;
    }
        q->rear++;
        q->data[q->rear] = data;
        return;
}

void display(queue* q)
{
    if(isEmpty(q))
    {
        printf("queue is empty \n");
        return;
    }
    for(int i = q->front; i <= q->rear; i++)
    {
        printf("%d ", q->data[i]);
    }

    printf("\n");
}

void dequeue(queue* q)
{
    if(isEmpty(q))
    {
        printf("queue is empty \n");
        return;
    }
    q->front++;
}

int isEmpty(queue* q)
{
    if(q->front == -1 && q->rear == -1)
    {
        return 1;
    }
    return 0;
}