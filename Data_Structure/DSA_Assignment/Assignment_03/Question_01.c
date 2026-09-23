#include<stdio.h>

int isEmpty(int *top)
{
    if(*top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(int *top,int size)
{
    if(*top == size-1)
    {
        printf("Stack is Full \n");
        return 1;
    }
    else
        return 0;
}

void displayStack(int arr[], int *top)
{
    if(!isEmpty(top))
    {
        for(int i = 0; i <= *top; i++)
        {
            printf("%d\n",arr[i]);
        }
    }
    else
        printf("Stack is Empty \n");
}

int push(int arr[], int size,int *top, int value)
{
    if(!isFull(top,size))
    {
        (*top)++;
        arr[*top] = value;
        printf("Element is Pushed! \n");
        return 1;
    }
    else
    {
        printf("Satck is Full \n");
        return 0;
    }
}

int pop(int *top)
{
    if(isEmpty(top))
    {
        printf("Stack is Empty \n");
        return 0;
    }
    else
    {
        (*top)--;
        printf("Stack element is removed! \n");
        return 1;
    }
}

int findMiddle(int arr[], int *top)
{
    if(isEmpty(top))
    {
        printf("Stack is Empty \n");
        return 0;
    }
    else
    {
        int s = (*top)+1;
        int mid = s/2;
        printf("Middle Element is : %d\n",arr[mid]);
        return 1;
    }
}

int deleteMiddle(int arr[], int *top)
{
    if(isEmpty(top))
    {
        printf("Stack is Empty \n");
        return 0;
    }
    else
    {
        int s = (*top)+1;
        int mid = s/2;
        arr[mid] = 0;
        for(int i = mid; i <= *top; i++)
        {
            arr[i] = arr[mid+1];
            mid++;
        }
        (*top)--;
        printf("Middle element is delete \n");
        return 1;
    }
}

void main()
{
    int size = 10;
    int arr[size];
    int top = -1;

    push(arr,size,&top,1);
    push(arr,size,&top,2);
    push(arr,size,&top,3);
    push(arr,size,&top,4);
    push(arr,size,&top,5);
    push(arr,size,&top,6);
    push(arr,size,&top,7);

    displayStack(arr,&top);

    pop(&top);
    displayStack(arr,&top);

    push(arr,size,&top,7);
    push(arr,size,&top,8);
    push(arr,size,&top,9);
    push(arr,size,&top,10);

    displayStack(arr,&top);

    findMiddle(arr,&top);

    deleteMiddle(arr,&top);

    displayStack(arr,&top);
    push(arr,size,&top,6);
    displayStack(arr,&top);
}