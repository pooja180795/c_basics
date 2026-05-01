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

    return 0;
}