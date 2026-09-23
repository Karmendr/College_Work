/*
    N = 1234
    Linked List : 1,2,3,4

*/
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
    printf("\n");
}


int main()
{
    struct Node *temp,*head = NULL;
    int n,d;
    printf("Enter a Number : ");
    scanf("%d",&n);

    while(n!=0)
    {
        d = n%10;
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->info = d;
        if(head == NULL)
        {
            temp->next = NULL;
            head = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
        n = n/10;
    }
    displayLinkList(head);
    return 0;
}