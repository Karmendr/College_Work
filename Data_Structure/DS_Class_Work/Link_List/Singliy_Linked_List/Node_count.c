#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int info;
    struct Node *next;
};

int nodeCount(struct Node *head)
{
    struct Node *temp = head;
    int count = 0;

    while(temp!=NULL)
    {
        count = count+1;
        temp = temp->next;
    }
    return count;
}

int main()
{
    struct Node *head, *first, *second, *third;
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    first->info = 45;
    first->next = second;
    head = first;

    second->info = 46;
    second->next = third;

    third->info = 47;
    third->next = NULL;

    printf("No. of Nodes: %d",nodeCount(head));
    return 0;
}