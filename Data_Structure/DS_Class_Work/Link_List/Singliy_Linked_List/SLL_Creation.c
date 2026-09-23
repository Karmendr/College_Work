#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int info;
    struct Node * next;
};

int main()
{
    struct Node *temp, *head, *second, *thired, *fourth;

    temp = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    thired = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    temp->info = 4;
    temp->next = second;
    head = temp;

    second->info = 6;
    second->next = thired;
    temp = second;

    thired->info = 8;
    thired->next = fourth;
    temp = thired;

    fourth->info = 10;
    fourth->next = NULL;
    temp = fourth;
         
    return 0;
}