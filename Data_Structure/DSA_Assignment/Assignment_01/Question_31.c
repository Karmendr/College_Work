// C/C++ program to find sum of first n natural number.i.e: s=1+2+3..+n

#include<stdio.h>

void main()
{
    int n;
    printf("Enter a number :- ");
    scanf("%d",&n);

    int sum = 0;

    for(int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("Sum :- %d",sum);
}