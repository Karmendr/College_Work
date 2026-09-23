// C/C++ program to find power function a^b.

#include<stdio.h>

void main()
{
    int a,b,x=1;
    printf("Enter value of a :- ");
    scanf("%d",&a);
    printf("Enter value of b :- ");
    scanf("%d",&b);

    for(int i = 1; i <= b; i++)
    {
        x = x*a;
    }
    printf("Answer :- %d",x);
}