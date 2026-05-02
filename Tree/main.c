#include <stdio.h>
#include "tree.h"

int main()
{
    Node* root = NULL;
    
    root = addNode(root, 20);
    root = addNode(root, 10);
    root = addNode(root, 7);
    root = addNode(root, 6);
    root = addNode(root, 15);
    root = addNode(root, 11);
    root = addNode(root, 16);
    root = addNode(root, 13);
    root = addNode(root, 17);
    root = addNode(root, 19);
    root = addNode(root, 18);
    
    inorder(root);  // should print: 1 3 4 5 7

    searchNode(root, 3);

    preorder(root); // should print 5 3 1 4 7
    printf("\n");
    postorder(root); // should print 1 4 3 7 5

    deleteNode(root, 15);
    printf("\n");
    inorder(root);

    return 0;
}