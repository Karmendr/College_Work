#include<stdio.h>

int factorial(int n)
{
    if(n==1)
        return 1;
    else
        return n*factorial(n-1);
}

int main()
{
    /*
       Author : Karmendra Deval
       Roll Number : Y26271015
    */

    int n,fact;
    printf("Enter a Number : ");
    scanf("%d",&n);
    fact = factorial(n);
    printf("Factorial of %d : %d",n,fact);
    return 0;
}

