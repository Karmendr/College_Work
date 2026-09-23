#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int info;
    struct Node *next;
};

void numberOfEvenOddNode(struct Node *head)
{
    struct Node *temp = head;
    int c1 = 0, c2 = 0;

    while(temp!=NULL)
    {
        if(temp->info%2 == 0)
            c1++;
        else
            c2++;
        temp = temp->next;
    }

    printf("No. of Even Nodes: %d\n",c1);
    printf("No. of Odd Nodes: %d\n",c2);
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

    numberOfEvenOddNode(head);
    return 0;
}