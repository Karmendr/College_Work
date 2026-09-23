#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int info;
    struct Node * next;
};

void displayLinkList(struct Node* head)
{
    struct Node *temp = head;

    while(temp!=NULL)
    {
        printf("%d ",temp->info);
        temp = temp->next;
    }
}

void insertAtEnd(struct Node *temp)
{
    
}

int main()
{
    struct Node *first, *head, *second, *thired, *fourth, *temp1;

    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    thired = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    first->info = 4;
    first->next = second;
    head = first;
    temp1 = head;

    second->info = 6;
    second->next = thired;

    thired->info = 8;
    thired->next = fourth;

    fourth->info = 10;
    fourth->next = NULL;

    // Insering a Node at begining
    struct Node *temp2 = (struct Node *)malloc(sizeof(struct Node));
    temp2->info = 2;
    temp2->next = head;
    head = temp2;

    displayLinkList(head);
         
    return 0;
}