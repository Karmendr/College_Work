// Write a C program to 2D array of 7X5 which consist 0 and 1

#include <stdio.h>

void main()
{
    int arr[7][5];

    printf("Enter 0 or 1 for 7X5 array:\n");

    for(int i = 0; i < 7; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n7X5 Array:\n");

    for(int i = 0; i < 7; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}