// C/C++ program to find sum=1/1!+1/2!+1/3!+…..1/n!

#include<stdio.h>

void main()
{
    float sum = 0;
    int fact = 1,n;

    printf("Enter a number :- ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j >= 1; j--)
        {
            fact *= j;
        }
        sum += (1.0/fact);
        fact = 1;
    }
    printf("Sum of Factorial :- %.3f",sum);
}