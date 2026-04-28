#include <stdio.h>
#include "stack.h"

int main()
{
    s myStack;
    myStack.top = -1;
    int top, peek;
    
    pushStack(&myStack, 10);
    pushStack(&myStack, 9);
    pushStack(&myStack, 8);
    pushStack(&myStack, 7);
    pushStack(&myStack, 6);
    pushStack(&myStack, 5);
    pushStack(&myStack, 4);
    pushStack(&myStack, 3);
    pushStack(&myStack, 2);
    pushStack(&myStack, 1);

    display(&myStack);

    top = popStack(&myStack);
    printf("popped value = %d \n", top);
    display(&myStack);

    peek = peekStack(&myStack);
    printf("peeked value = %d \n", peek);

    display(&myStack);


    return 0;
}