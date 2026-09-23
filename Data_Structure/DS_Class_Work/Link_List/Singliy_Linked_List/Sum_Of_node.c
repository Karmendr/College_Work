#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int info;
    struct Node *next;
};

int sumOfNodeValue(struct Node *head)
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

    printf("Sum of Node: %d",sumOfNodeValue(head));
    return 0;
}