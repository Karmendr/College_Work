// C/C++ program to find the largest of two numbers.

#include<stdio.h>

void main()
{
    int n1,n2;
    printf("Enter first Number :- ");
    scanf("%d",&n1);
    printf("Enter second Number :- ");
    scanf("%d",&n2);

    if(n1>n2) printf("%d is largest",n1);
    else printf("%d is lagrest",n2);
}