// 9. C/C++ Program four digit number sum

#include<stdio.h>

void main()
{
    int n;
    printf("Enter a four digit number :- ");
    scanf("%d",&n);
    int d, sum = 0;
    while(n!=0)
    {
        d = n%10;
        sum += d;
        n = n/10;
    }
    printf("Sum :- %d",sum);
}