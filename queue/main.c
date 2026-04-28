#include <stdio.h>
#include "queue.h"

int main()
{
    queue q;
    q.front = -1;
    q.rear = -1;

    display(&q);

    enqueue(&q, 10);
    enqueue(&q, 11);
    enqueue(&q, 12);
    enqueue(&q, 13);
    enqueue(&q, 14);

    display(&q);

    dequeue(&q);

    display(&q);

    return 0;
}