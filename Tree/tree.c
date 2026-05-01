#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

Node* createNode(int x)
{
    Node* root = malloc(sizeof(Node));
    root->data = x;
    root->left = NULL;
    root->right = NULL;
    return root;
}

Node* addNode(Node* root, int x)
{
    if(root == NULL)
    {
        return createNode(x);
    }

    if(x < root->data)
    {
        root->left = addNode(root->left, x);
    }
    else if(x > root->data)
    {
        root->right = addNode(root->right, x);
    }

    return root;
}

void inorder(Node* root)
{
    if(root == NULL)
        return;
    
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}




