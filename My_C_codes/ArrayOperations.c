#include<stdio.h>

void display(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}

void insertElement(int arr[], int idx, int ele, int *totalElements)
{
    for(int i = *totalElements-1; i >= 0; i--)
    {
        if(idx == i)
        {
            arr[i] = ele;
            *totalElements++;
            break;
        }
        else
            arr[i+1] = arr[i];
    }
    printf("\n");
}

void main()
{
    int arr[50] = {4,3,6,8,9};
    int totalElements = 5;
    display(arr,totalElements);
    insertElement(arr,3,45,&totalElements);
    display(arr,totalElements);
}