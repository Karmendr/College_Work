#include<stdio.h>
#include<stdlib.h>

struct Node{
    int info;
    struct Node *next;
};

void insertAtEnd(struct Node *head, int x)
{
    struct Node *temp1 = head, *temp2;
    temp2 = (struct Node *)malloc(sizeof(struct Node));
    temp2->info = x;
    
    while(temp1->next != NULL)
    {
        temp1 = temp1->next;
    }

    temp1->next = temp2;
    temp2->next = NULL;
    printf("Node Inserted!\n");
}

void mergingTwoSLL(struct Node *head1, struct Node *head2)
{
    struct Node *temp = head1;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = head2;
}

void displayLinkedList(struct Node *head)
{
    struct Node *temp = head;

    while(temp != NULL)
    {
        if(temp->next == NULL)
        {
            printf("%d -> NULL",temp->info);
            break;
        }
        else
        {
            printf("%d -> ",temp->info);
            temp = temp->next;
        }
    }
    printf("\n");
}

void main()
{
    struct Node *temp1,*head1, *temp2, *head2;
    temp1 = (struct Node *)malloc(sizeof(struct Node));
    temp1->info = 34;
    temp1->next = NULL;
    head1 = temp1;
    insertAtEnd(head1,23);
    insertAtEnd(head1,32);
    insertAtEnd(head1,45);

    displayLinkedList(head1);

    temp2 = (struct Node *)malloc(sizeof(struct Node));
    temp2->info = 66;
    temp2->next = NULL;
    head2 = temp2;
    insertAtEnd(head2, 89);
    insertAtEnd(head2, 52);
    insertAtEnd(head2, 96);

    displayLinkedList(head2);
    mergingTwoSLL(head1,head2);
    displayLinkedList(head1);
}