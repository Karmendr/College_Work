// C/C++ program to find the smallest of two numbers.

#include<stdio.h>

void main()
{
    int n1,n2;
    printf("Enter first number :-");
    scanf("%d",&n1);
    printf("Enter second number :-");
    scanf("%d",&n2);

    if(n1<n2) printf("%d is smallest",n1);
    else printf("%d is smallest",n2);
}