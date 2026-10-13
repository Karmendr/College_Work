#include<stdio.h>

void main()
{
    int arr[5] = {10,20,30,40,50};

    printf("Before Reverse array elements : ");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    int i=0,j=4;
    while(i<j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    printf("\nAfter Reverse array elements : ");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
}