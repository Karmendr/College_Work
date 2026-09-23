// Write a C program to reverse of an array

#include<stdio.h>

void main()
{
    int arr[5] = {1,2,3,4,5};
    printf("Array before reverse :- \n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    int i = 0, j = 4;
    while(i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    printf("\nArray after reverse :- \n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
}