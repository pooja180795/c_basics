#ifndef LINKED_LIST
#define LINKED_LIST

typedef struct Node{
    int data;
    struct Node *next;
}n;

n* createNode(int data);
void insertAtBeginning(n** head_add , int data);
void display(n* head);
void insertAtEnd(n** head_add, int data);

#endif