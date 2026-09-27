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

int minimumInSLL(struct Node *head)
{
    struct Node *temp = head;
    int min = temp->info;
    temp = temp->next;

    while(temp!=NULL)
    {
        if(temp->info<min)
        {
            min = temp->info;
            break;
        }
        temp = temp->next;
    }
    return min;
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
    struct Node *temp,*head;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->info = 34;
    temp->next = NULL;
    head = temp;
    insertAtEnd(head,23);
    insertAtEnd(head,32);
    insertAtEnd(head,45);
    insertAtEnd(head,75);
    insertAtEnd(head,28);
    displayLinkedList(head);
    int min = minimumInSLL(head);
    printf("Minimum Node in SLL : %d",min);
}