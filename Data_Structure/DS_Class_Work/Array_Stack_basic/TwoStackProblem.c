#include<stdio.h>

#define MAX 4
int arr[MAX];
int top1 = -1, top2 = MAX;

void pushS1(int n)
{
    if(top1 == MAX-1)
        printf("Overflow!\n");
    else if(top2 == top1+1)
        printf("Overflow!");
    else
    {
        top1++;
        arr[top1] = n;
    }
}

void pushS2(int n)
{
    if(top2 == 0)
        printf("Overflow!\n");
    else if(top1+1 == top2)
        printf("Overflow!");
    else
    {
        top2--;
        arr[top2] = n;
    }
}

void popS1()
{
    int temp;
    if(top2 == 0)
        printf("Underflow!\n");
    else if(top1 == -1)
        printf("Underflow!\n");
    else
    {
        temp = arr[top1];
        top1--;
    }
}

void popS2()
{
    int temp;
    if(top1 == MAX-1)
        printf("Underflow!");
    else if(top2 == MAX)
        printf("Underflow!");
    else
    {
        temp = arr[top2];
        top2++;
    }
}

void displayS1()
{
    printf("Stack 1 :\n");
    if(top1 == -1)
        printf("Stack is Empty");
    else
    {
        for(int i = 0; i <= top1; i++)
        {
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
}

void displayS2()
{
    printf("Stack 2 :\n");
    if(top2 == MAX)
        printf("Stack is Empty");
    else
    {
        for(int i = top2; i < MAX; i++)
        {
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
}

int main()
{
    int s,n,check,choice;
    do
    {
        printf("1. Insert Element \n2. Delete Element \n3. Display");
        printf("\nEnter your choice : ");
        scanf("%d",&check);
        switch(check)
        {
            case 1:
                printf("where do you want to push element : \nStack 1\nStack 2\n");
                printf("Enter Stack Number : ");
                scanf("%d",&s);
                switch(s)
                {
                    case 1:
                        printf("Enter a Element : ");
                        scanf("%d",&n);
                        pushS1(n);
                        break;
                    case 2:
                        printf("Enter a Element : ");
                        scanf("%d",&n);
                        pushS2(n);
                        break;
                    default:
                        printf("Enter vailid input ");
                }
                break;
            case 2:
                printf("where do you want to delete element : \nStack 1\nStack 2\n");
                printf("Enter Stack Number : ");
                scanf("%d",&s);
                switch(s)
                {
                    case 1:
                        popS1();
                        break;
                    case 2:
                        popS2();
                        break;
                    default:
                        printf("Enter vailid Stack Number :");
                }
                break;
            case 3:
                displayS1();
                displayS2();
                break;
            default:
                printf("Enter Vailid input ");
        }
        printf("Continue -> 1\nExit -> 0\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
    }while(choice == 1);
    return 0;
}