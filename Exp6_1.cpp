//Queue using Linked List

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
}*front=NULL, *rear=NULL;

void enqueue(int x) {
    struct node* new = malloc(sizeof(struct node));
    new->data = x; new->next = NULL;
    if(rear == NULL) front = rear = new;
    else {
        rear->next = new;
        rear = new;
    }
}

void dequeue() {
    if(front == NULL) printf("Underflow\n");
    else {
        struct node* temp = front;
        printf("Deleted: %d\n", temp->data);
        front = front->next;
        free(temp);
    }
}

void display() {
    struct node* temp = front;
    while(temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main() {
    enqueue(10); enqueue(20); enqueue(30);
    display(); dequeue(); display();
}
