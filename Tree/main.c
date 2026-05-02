#include <stdio.h>
#include "tree.h"

int main()
{
    Node* root = NULL;
    
    root = addNode(root, 5);
    root = addNode(root, 3);
    root = addNode(root, 7);
    root = addNode(root, 1);
    root = addNode(root, 4);
    
    inorder(root);  // should print: 1 3 4 5 7

    searchNode(root, 3);

    preorder(root); // should print 5 3 1 4 7
    printf("\n");
    postorder(root); // should print 1 4 3 7 5

    return 0;
}