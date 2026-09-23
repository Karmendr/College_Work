// C/C++ program to find sum= 2+4+6..

#include<stdio.h>

void main()
{
    int n;
    printf("Enter a number :- ");
    scanf("%d",&n);

    int sum = 0;

    for(int i = 2; i <= n; i+=2)
    {
        sum += i;
    }
    printf("Sum :- %d",sum);
}