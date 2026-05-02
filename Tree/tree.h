#ifndef TREE
#define TREE

typedef struct Node{
    int data; 
    struct Node* left;
    struct Node* right;
}Node;

Node* createNode(int x);
Node* addNode(Node* root, int x);
void inorder(Node* root);
void searchNode(Node* root, int x);
void preorder(Node* root);
void postorder(Node* root);

#endif