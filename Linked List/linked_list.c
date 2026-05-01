#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

n* createNode(int data)
{
    n* newNode = malloc(sizeof(n));           // just 1 node
    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(n** head_add, int data)
{
    n* first = createNode(data);
    first->next = *head_add;
    *head_add = first;
}

void display(n* head)
{
    n* current_add = head;
    
    while(current_add != NULL)
    {
        printf("%d->", current_add->data);
        current_add = current_add->next;
    }
    printf("NULL\n");
}

void insertAtEnd(n** head_add, int data)
{
    n* lastNode = createNode(data);
    if(*head_add == NULL)                   // empty list
    {    
        *head_add = lastNode;               // new node becomes head
        return;
    }
    
    n* current_add = *head_add;                       
    while(current_add->next != NULL)
    {
        current_add = current_add->next;
    }
    current_add->next = lastNode;
}

void deleteNode(n** head, int data)
{
    n* current = *head;
    n* prev = NULL;
 
    while(current != NULL && current->data != data)
    {
        prev = current;
        current = current->next;
    }

    if(current == NULL)
    {
        printf("Node not found\n");
        return;
    }

    if(prev == NULL)                 // deleting head ncd ..ode
    {
        *head = current->next;
    }
    else
    {
        prev->next = current->next;
    }
} 

void freeList(n** head)
{
    n* temp;

    while(*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}