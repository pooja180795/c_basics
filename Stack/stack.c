#include <stdio.h>
#include "stack.h"

void pushStack(s* stack, int data)
{
        if(stack->top == 9)
        {
            printf("stack is full \n");
            return;
        }
        stack->top++;
        stack->data[stack->top] = data; 
}

int popStack(s* stack)
{
    if(isEmpty(stack))
    {
        printf("stack is empty");
        return -1;
    }

    int val = stack->data[stack->top];
    stack->top--;
    return val;
}

int isEmpty(s* stack)
{
    if(stack->top == -1)
    {
        return 1;
    }
    return 0;
}

int peekStack(s* stack)
{
    if(isEmpty(stack))
    {
        printf("stack is empty");
        return -1;
    }
    return stack->data[stack->top];
}

void display(s* stack)
{
    if(isEmpty(stack))
    {
        printf("stack is empty");
        return -1;
    }
    for(int i = 0; i <= stack->top; i++)
    {
        printf("%d \t", stack->data[i]);
    }
    printf("\n");
}