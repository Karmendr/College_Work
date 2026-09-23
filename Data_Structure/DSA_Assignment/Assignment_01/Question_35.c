// C/C++ program to find factorial of given number.

#include<stdio.h>

void main()
{
    int n, fact = 1;
    printf("Enter a Number :- ");
    scanf("%d",&n);
    
    for(int i = n; i >= 1; i--)
    {
        fact *= i;
    }
    printf("Factorial :- %d",fact);
}