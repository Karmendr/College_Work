// Write a C program to create a matrix and display it.

#include<stdio.h>

void main()
{
    int r,c;
    printf("Enter number of rows :- ");
    scanf("%d",&r);
    printf("Enter number of columns :- ");
    scanf("%d",&c);
    int arr[r][c];

    printf("Enter array elements %dX%d :- \n",r,c);
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Matrix :- \n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}