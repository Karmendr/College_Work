// Write a C program to find total number of 0’s and total number of 1’s.

#include <stdio.h>

void main()
{
    int r,c;
    printf("Enter number of rows :- ");
    scanf("%d",&r);
    printf("Enter number of columns :- ");
    scanf("%d",&c);

    int arr[r][c];

    printf("Enter 0 or 1 for %dX%d array:\n",r,c);

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nArray:\n");

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int zeros = 0;
    int ones = 0;

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(arr[i][j]==0) zeros++;
            else ones++;
        }
    }
    printf("Total number of 0's :- %d",zeros);
    printf("\nTotal number of 1's :- %d",ones);
}