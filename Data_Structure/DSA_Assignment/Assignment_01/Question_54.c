// Write a C program to find maximum 4X3 array.

#include<stdio.h>

void main()
{
    int arr[4][3];

    printf("Enter array elements: %dX%d\n",4,3);
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int max = 0;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(arr[i][j]>=max)
                max = arr[i][j];
        }
    }

    printf("Maximum element : %d",max);

}