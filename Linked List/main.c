#include <stdio.h>
#include "linkedlist.h"

int main()
{
    n* head = NULL;
    insertAtBeginning(&head , 2);
    insertAtBeginning(&head , 1);

    insertAtEnd(&head, 3);
    insertAtEnd(&head, 4);

    display(head);

    insertAtBeginning(&head , 22);
    display(head); 

    deleteNode(&head, 2);

    display(head);
    freeList(&head);
    return 0;
}