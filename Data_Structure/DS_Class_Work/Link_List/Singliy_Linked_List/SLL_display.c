#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int info;
    struct Node *next;
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

int main()
{
    struct Node *first, *second, *thired, *fourth;
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    thired = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    first->info = 23;
    first->next = second;

    second->info = 45;
    second->next = thired;

    thired->info = 78;
    thired->next = fourth;

    fourth->info = 90;
    fourth->next = NULL;

    displayLinkList(first);
    return 0;
}