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
    return 0;
}