// Write a program that execute true block if inserted number is equal to 99 otherwise false
// blocks.

#include<stdio.h>

void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n==99)
        printf("number is equal to 99");
    else
        printf("number is not equal to 99");
}