// Write a C program to find out the addition, subtraction, and multiplication of two matrix.

#include<stdio.h>

void main()
{
    int n1,m1,n2,m2;
    printf("Enter number of rows of matrix first :- ");
    scanf("%d",&n1);
    printf("Enter number of columns of matrix first :- ");
    scanf("%d",&m1);
    int A[n1][m1];
    printf("Enter elements of first matrix :- \n");
    for(int i = 0; i < n1; i++)
    {
        for(int j = 0; j < m1; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    
    printf("Enter number of rows of matrix second :- ");
    scanf("%d",&n2);
    printf("Enter number of columns of matrix second :- ");
    scanf("%d",&m2);
    int B[n2][m2];
    printf("Enter elements of second matrix :- \n");
    for(int i = 0; i < n2; i++)
    {
        for(int j = 0; j < m2; j++)
        {
            scanf("%d",&B[i][j]);
        }
    }

    int add[n1][m1];
    int sub[n1][m1];
    int mul[n1][m2];

    if((n1==m1) && (n2==m2))
    {
        for(int i = 0; i < n1; i++)
        {
            for(int j = 0; j < m1; j++)
            {
                add[i][j] = A[i][j] + B[i][j];
                sub[i][j] = A[i][j] - B[i][j];
            }
        }
    }
    else
        printf("Addition/Subtraction is not possible");

    if(m1==n2)
    {
        for(int i = 0; i < n1; i++)
        {
            for(int j = 0; j < m1; j++)
            {
                mul[i][j] = 0;

                for(int k = 0; k < m1; k++)
                {
                    mul[i][j] += A[i][k] * B[k][j];
                }
            }
        }
    }
    else
        printf("Multiplication is Not Possible");

    printf("Addition\n");
    for(int i = 0; i < n1; i++)
    {
        for(int j = 0; j < m1; j++)
        {
            printf("%d ",add[i][j]);
        }
        printf("\n");
    }
    printf("Subtraction\n");
    for(int i = 0; i < n1; i++)
    {
        for(int j = 0; j < m1; j++)
        {
            printf("%d ",sub[i][j]);
        }
        printf("\n");
    }
    printf("Multiplication\n");
    for(int i = 0; i < n1; i++)
    {
        for(int j = 0; j < m2; j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
}