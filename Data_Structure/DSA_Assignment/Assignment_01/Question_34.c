// C/C++ program to find sum=1/1+1/2+1/3+…1/n

#include<stdio.h>

void main()
{
    int n;
    printf("Enter a number :- ");
    scanf("%d",&n);

    float sum = 0;

    for(int i = 1; i <= n; i++)
    {
        sum += (1.0/i);
    }
    printf("Sum :- %.2f",sum);
}