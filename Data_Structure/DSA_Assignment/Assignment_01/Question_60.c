// Write a C program to transpose of given matrix 3X3.

#include<stdio.h>

void main()
{
    int arr[3][3];
    int trans[3][3];

    printf("Enter array elements %dX%d : \n",3,3);
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Matrix : \n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            trans[j][i] = arr[i][j];
        }
    }

    printf("Transpose Matrix : \n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
}