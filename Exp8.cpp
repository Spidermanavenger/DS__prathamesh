//Binary Tree Traversals

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node* create(int x) {
    struct node* new = malloc(sizeof(struct node));
    new->data = x;
    new->left = new->right = NULL;
    return new;
}

void inorder(struct node* root) {
    if(root) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct node* root) {
    if(root) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node* root) {
    if(root) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    struct node* root = create(10);
    root->left = create(20);
    root->right = create(30);

    inorder(root);
}
