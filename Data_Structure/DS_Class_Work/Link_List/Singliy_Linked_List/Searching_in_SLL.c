#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int info;
    struct Node *next;
};

int SearchingInSLL(struct Node *head)
{
    struct Node *temp = head;
    int count = 0, flag = 0, Key;
    printf("Enter Key : ");
    scanf("%d",&Key);

    while(temp!=NULL)
    {
        count = count+1;
        if(temp->info == Key)
        {
            flag = 1;
            break;
        }
        else
            temp = temp->next;
    }

    if(flag!=0)
        printf("Key at : %d",count);
    else
        printf("Not found");
}

int main()
{
    struct Node *head, *first, *second, *thired, *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    thired = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    first->info = 2;
    first->next = second;
    head = first;

    second->info = 4;
    second->next = thired;

    thired->info = 6;
    thired->next = fourth;

    fourth->info = 8;
    fourth->next = NULL;

    SearchingInSLL(head);
    return 0;
}