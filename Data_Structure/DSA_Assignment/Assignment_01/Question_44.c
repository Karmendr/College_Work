// Write a C program to swap a number in array.

#include<stdio.h>

void main()
{
    int arr[5] = {1,2,3,4,5};

    printf("Before swaping array\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nSwaping arr[0] and arr[4]");
    int temp = arr[0];
    arr[0] = arr[4];
    arr[4] = temp;

    printf("\nAfter swaping array\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
}