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
    printf("\n");
}

void deleteAfterNode(struct Node *head)
{
    struct Node *temp1, *temp2;
    int pos;
    printf("Enter POS : ");
    scanf("%d",&pos);
    temp1 = head;
    for(int i = 1; i <= pos-2; i++)
    {
        temp1 = temp1->next;
    }
    temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
}

int main()
{
    struct Node *first, *head, *second, *thired, *fourth;

    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    thired = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    first->info = 4;
    first->next = second;
    head = first;

    second->info = 6;
    second->next = thired;

    thired->info = 8;
    thired->next = fourth;

    fourth->info = 10;
    fourth->next = NULL;

    displayLinkList(head);
    deleteAfterNode(head);
    displayLinkList(head);
         
    return 0;
}