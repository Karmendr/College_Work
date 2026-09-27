#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int info;
    struct Node *next;
};

void insertNode(struct Node **head, int value)
{
    struct Node *temp1 = *head;
    struct Node *temp2 = (struct Node *)malloc(sizeof(struct Node));
    temp2->info = value;

    while(temp1->next!=NULL)
    {
        temp1 = temp1->next;
    }

    temp1->next = temp2;
    temp2->next = NULL;
    printf("Node inserted!\n");
}

void displayInkedList(struct Node **head)
{
    struct Node *temp = *head;

    while(temp!=NULL)
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
}

int MaximumInSLL(struct Node **head)
{
    struct Node *temp = *head;
    int max = temp->info;
    temp = temp->next;

    while(temp!=NULL)
    {
        if(max<temp->info)
            max = temp->info;
        
        temp = temp->next;
    }
    return max;
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->info = 2;
    head->next = NULL;
    insertNode(&head,10);
    insertNode(&head,20);
    insertNode(&head,30);
    insertNode(&head,40);
    insertNode(&head,50);
    int ch;
    do
    {
        printf("Press 1. Insert Node at end \n");
        printf("Press 2. Find Maximum \n");
        printf("Press 3. Display \n");
        int n,value,m;
        printf("Enter your choice : ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                printf("Enter info : ");
                scanf("%d",&value);
                insertNode(&head, value);
                break;

            case 2:
                m = MaximumInSLL(&head);
                printf("Maximum : %d\n",m);
                break;

            case 3:
                displayInkedList(&head);
                break;

            default:
                printf("Enter valid input : \n");
        }
        printf("\nPress 1. Continue :\nPress 0. Exit :\n");
        scanf("%d",&ch);
    }while(ch==1);
    return 0;
}