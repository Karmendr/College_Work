/*
    N = 1234
    Linked List : 4,3,2,1

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
    struct Node *temp1, *temp2, *head = NULL;
    int n,d;
    printf("Enter a Number : ");
    scanf("%d",&n);

    while(n!=0)
    {
        d = n%10;
        temp2 = (struct Node *)malloc(sizeof(struct Node));
        temp2->info = d;
        if(head == NULL)
        {
            temp2->next = NULL;
            head = temp2;
        }
        else
        {
            temp1 = head;
            while(temp1->next!=NULL)
            {
                temp1 = temp1->next;
            }
            temp1->next = temp2;
            temp2->next = NULL;
        }
        n = n/10;
    }
    displayLinkList(head);
    return 0;
}