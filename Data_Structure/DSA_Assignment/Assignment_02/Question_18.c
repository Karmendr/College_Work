// WAP in C to find two numbers are equal or not. Use all possible methods.

#include<stdio.h>

void main()
{
    int n1,n2;
    printf("Enter first number :- ");
    scanf("%d",&n1);
    printf("Enter second number :- ");
    scanf("%d",&n2);
    if(n1 == n2)
        printf("Number is equal");
    else if(n1 < n2)
        printf("%d is less than %d",n1,n2);
    else
        printf("%d is greater than %d",n1,n2);

}