#include<stdio.h>

#define MAX 10
int STACK[MAX];
int top = -1;

void push(int x)
{
    if(top == MAX-1)
        printf("OverFlow!\n");
    else
    {
        top = top+1;
        STACK[top] = x;
        printf("Stack element inserted! \n");
    }
}

int pop()
{
    int temp;
    if(top == -1)
        printf("UnderFlow!\n");
    else
    {
        temp = STACK[top];
        top = top-1;
    }
    return temp;
}

int findMiddle()
{
    if(top == -1)
    {
        printf("UnderFlow!\n");
        return -1;
    }
    int mid = top/2;
    return STACK[mid];
}

void deleteMiddle()
{
   if (top == -1)
        printf("UnderFlow!\n");

    int mid = top / 2;

    printf("Deleted middle element = %d\n", STACK[mid]);

    for (int i = mid; i < top; i++)
    {
        STACK[i] = STACK[i + 1];
    }
    top = top-1;
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty!\n");
        return;
    }

    printf("Stack: ");

    for (int i = 0; i <= top; i++)
    {
        printf("%d ", STACK[i]);
    }

    printf("\n");
}

void main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    int ch;
    do
    {
        printf("\nPress 1. Push\n");
        printf("Press 2. Pop\n");
        printf("Press 3. Find Middle\n");
        printf("Press 4. Delete Middle\n");
        printf("Press 5. Display \n");
        printf("Enter your choice : ");
        int n,x;
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                printf("Enter stack element : ");
                scanf("%d",&x);
                push(x);
                break;

            case 2:
                x = pop();
                if(x == -1)
                    printf("Stack is Empty!\n");
                else
                    printf("deleted element is : %d\n",x);
                break;

            case 3:
                x = findMiddle();
                if(x == -1)
                    printf("Stack is Empty!\n");
                else
                    printf("Middel Element : %d",x);
                break;

            case 4:
                deleteMiddle();
                break;

            case 5:
                display();
                break;

            default:
                printf("Enter valid input : \n");
        }
        printf("\nPress 1. Continue \nPress 2. Exit ");
        scanf("%d",&ch);
    }while(ch == 1);
}