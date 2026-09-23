// Write a C program to copy from one matrix A to another matrix B who’s size 3X3.

#include<stdio.h>

void main()
{
    int A[3][3];
    int B[3][3];

    printf("Enter array elements %dX%d : \n",3,3);
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("Matrix A : \n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            B[i][j] = A[i][j];
        }
    }

    printf("Matrix B : \n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
}