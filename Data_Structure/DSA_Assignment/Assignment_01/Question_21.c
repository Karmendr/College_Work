// C program to find given number is positive or negative.

#include<stdio.h>

void main()
{
    int n;
    printf("Enter a Number :- ");
    scanf("%d",&n);

    if(n==0) printf("Number is zero");
    else if(n>0) printf("Number is Positive");
    else printf("Number is Negative");
}