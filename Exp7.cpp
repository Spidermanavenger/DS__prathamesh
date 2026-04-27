//Singly Linked List (Insert + Display)

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
}*head=NULL;

void insert(int x) {
    struct node* new = malloc(sizeof(struct node));
    new->data = x;
    new->next = head;
    head = new;
}

void display() {
    struct node* temp = head;
    while(temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main() {
    insert(10); insert(20); insert(30);
    display();
}
