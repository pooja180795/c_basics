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

void searchNode(Node* root, int x)
{
    if(root == NULL)
    {
        printf("\n not found \n");
        return;
    }
    if(x == root->data)
    {
        printf("\n found \n");
        return;
    }
    if(x < root->data)
    {
        searchNode(root->left, x);
        return;
    }
    if(x > root->data)
    {
        searchNode(root->right, x);
    }
}

void preorder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
    
}

void postorder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

Node* deleteNode(Node* root, int x)
{
    if(root == NULL){
        return NULL;
    }

    if(x < root->data)
    {
        root->left = deleteNode(root->left, x);
    }

    else if(x > root->data)
    {
        root->right = deleteNode(root->right, x);
    }
    
    else{
        if(root->left == NULL && root->right == NULL)
        {
            
            free(root);
            return NULL;
        }

        else if(root->left != NULL && root->right == NULL)
        {
            Node* temp = root->left;
            free(root);
            return temp;
        }

        else if(root->left == NULL && root->right != NULL)
        {
            
            Node* temp = root->right;
            free(root);
            return temp;
        }

        else{
            
            Node* successor = root->right;
            while(successor->left != NULL)
            {
                successor = successor->left;
            }
            root->data = successor->data;
            root->right = deleteNode(root->right, successor->data);
        }
    }
    return root;
}




