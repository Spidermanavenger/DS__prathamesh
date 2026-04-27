//AVL Tree

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data, height;
    struct node *left, *right;
};

int height(struct node* n) {
    if(n==NULL) return 0;
    return n->height;
}

int max(int a, int b) {
    return (a>b)?a:b;
}

struct node* newNode(int x) {
    struct node* n = malloc(sizeof(struct node));
    n->data = x;
    n->left = n->right = NULL;
    n->height = 1;
    return n;
}

struct node* insert(struct node* node, int key) {
    if(node == NULL) return newNode(key);

    if(key < node->data)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);

    node->height = 1 + max(height(node->left), height(node->right));
    return node;
}

void inorder(struct node* root) {
    if(root) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {
    struct node* root = NULL;
    root = insert(root, 10);
    insert(root, 20);
    insert(root, 30);
    inorder(root);
}
