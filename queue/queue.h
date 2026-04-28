#ifndef QUEUE
#define QUEUE

typedef struct queue{
                int data[10];
                int front;
                int rear;
}queue;

void enqueue(queue* q, int data);
void display(queue* q);
void dequeue(queue* q);
int isEmpty(queue* q);

#endif
