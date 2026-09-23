// C/C++ program to find the largest of three numbers.

#include<stdio.h>

void main()
{
    int n1,n2,n3;
    printf("Enter first number :-");
    scanf("%d",&n1);
    printf("Enter second number :-");
    scanf("%d",&n2);
    printf("Enter third number :-");
    scanf("%d",&n3);

    if(n1>n2 && n1>n3) printf("%d is largest",n1);
    else if(n2>n1 && n2>n3) printf("%d is largest",n2);
    else printf("%d is largest",n3);
}