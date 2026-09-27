#include<stdio.h>

void main()
{
    int arr[5] = {3,6,4,9,7};

    printf("Before swapping array elements : ");
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

    printf("\nAfter swapping array elements : ");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
}