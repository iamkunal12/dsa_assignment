#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* createNode(int data) {

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;

}

void insertAfter(struct Node* head, int key, int data) 

{
    struct Node* temp = head;

    while (temp != NULL && temp->data != key)
        temp = temp->next;

    if (temp == NULL)
        return;

    struct Node* newNode = createNode(data);

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;
}

struct Node* deleteNode(struct Node* head, int key) 

{
    struct Node* temp = head;

    while (temp != NULL && temp->data != key)
        temp = temp->next;

    if (temp == NULL)
        return head;

    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        head = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);
    return head;
}

void display(struct Node* head) 

{
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()

{
    struct Node* head = createNode(10);
    
    head->next = createNode(20);
    head->next->prev = head;
    head->next->next = createNode(30);
    head->next->next->prev = head->next;

    display(head);

    insertAfter(head, 20, 25);
    display(head);

    head = deleteNode(head, 10);
    display(head);

    return 0;
}