// Write a C program to arrange an array element either in increasing or decreasing.

#include<stdio.h>

void main()
{
    int arr[5];
    int choice,n;

    printf("Enter number of elements :- ");
    scanf("%d",&n);
    printf("Enter array elements :- ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Array:-\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n1. Increasing Order ");
    printf("\n2. Decreasign Order ");
    printf("\nEnter your Choice :- ");
    scanf("%d",&choice);

    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(choice == 1 && arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            else if(choice == 2  && arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}