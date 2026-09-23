#include<stdio.h>

void main()
{
    int n, fact  = 1;
    printf("Enter a number :- ");
    scanf("%d",&n);

    for(int i = n; i>=1; i--)
    {
        fact *= i;
    }
    printf("Factorial of %d : %d",n,fact);
}