// WAP in C to check given number is greater than 100 or not.

#include<stdio.h>

void main()
{
    int n;
    printf("Enter a number :- ");
    scanf("%d",&n);
    if(n>100)
        printf("Number is greater than 100");
    else
        printf("Number is less than 100");
}