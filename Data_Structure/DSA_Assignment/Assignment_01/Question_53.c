// Write a C program to find out the addition, subtraction, multiplication and division of diagonal of a matrix.

#include<stdio.h>

void main()
{
    int n;
    printf("Enter order of matrix :- ");
    scanf("%d",&n);
    int arr[n][n];

    printf("Enter array elements %dX%d :- \n",n,n);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Matrix :- \n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    int sum = arr[0][0],sub = arr[0][0];
    int mul = arr[0][0];
    float div = arr[0][0];

    for(int i = 1; i < n; i++)
    {
        sum += arr[i][i];
        sub -= arr[i][i];
        mul *= arr[i][i];

        if(arr[i][i] != 0)
            div /= arr[i][i];
    }

    printf("\nAddition of diagonal = %d", sum);
    printf("\nSubtraction of diagonal = %d", sub);
    printf("\nMultiplication of diagonal = %d", mul);
    printf("\nDivision of diagonal = %.2f", div);

}