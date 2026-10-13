#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int info;
    struct Node *pre;
    struct Node *next;
};

void InsertAtEnd(struct Node **head, int x)
{
    struct Node *temp1 = *head;
    struct Node *temp2 = (struct Node *)malloc(sizeof(struct Node));
    temp2->info = x;
    temp2->next = NULL;

    while(temp1->next!=NULL)
    {
        temp1 = temp1->next;
    }
    temp1->next = temp2;
    temp2->pre = temp1;
    printf("Node Inserted!\n");
}

int sumOfNodeInfo(struct Node *head)
{
    struct Node *temp = head;
    int sum = 0;
    while(temp!=NULL)
    {
        sum = sum+temp->info;
        temp = temp->next;
    }
    return sum;
}

void displayDLL(struct Node **head)
{
    struct Node *temp = *head;
    while(temp!=NULL)
    {
        if(temp->next == NULL)
        {
            printf("%d <-> NULL",temp->info);
            break;
        }
        else
        {
            printf("%d <-> ",temp->info);
            temp = temp->next;
        }
    }
    printf("\n");
}

void main()
{
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->info = 10;
    temp->next = NULL;
    temp->pre = NULL;

    struct Node *head = temp;

    InsertAtEnd(&head,20);
    InsertAtEnd(&head,30);
    InsertAtEnd(&head,40);
    InsertAtEnd(&head,50);
    InsertAtEnd(&head,60);
    displayDLL(&head);
    printf("Sum of Nodes : %d",sumOfNodeInfo(head));
}