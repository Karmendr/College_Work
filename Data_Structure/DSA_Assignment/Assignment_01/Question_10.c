// program to find a reverse of a given number

#include<stdio.h>

void main()
{
    int n, d, rev = 0;

    printf("Enter a number :- ");
    scanf("%d",&n);

    while(n != 0)
    {
        d = n%10;
        rev = (rev*10)+d;
        n = n/10;
    }
    printf("%d",rev);
}