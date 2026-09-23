// C/C++ program to generate Fibonacci series of given limit

#include<stdio.h>

void main()
{
    int a = 0,b = 1,c,n;
    printf("Enter a number :- ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++)
    {
        printf("%d  ",a);
        c = a+b;
        a = b;
        b = c;
    }
}