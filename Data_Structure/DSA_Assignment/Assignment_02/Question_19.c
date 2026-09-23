// WAP in C to find square of number whose least significant digit is 7.

#include<stdio.h>

void main()
{
    int n;
    printf("Enter a number :- ");
    scanf("%d",&n);
    
    if(n%10 == 7)
        printf("Suqare of %d is : %d",n,(n*n));
    else
        printf("Least significant digit is not 7");

}