// Write a C program to find maximum 3X4 array

#include<stdio.h>

void main()
{
    int arr[3][4];

    printf("Enter array elements: %dX%d\n",3,4);
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int max = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(arr[i][j]>=max)
                max = arr[i][j];
        }
    }

    printf("Maximum element : %d",max);

}