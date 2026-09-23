// WAP in C to find average of four numbers and numbers take from user

#include<stdio.h>

void main()
{
    int a,b,c,d,sum,avg;
    printf("Enter first Number : ");
    scanf("%d",&a);
    printf("Enter second Number : ");
    scanf("%d",&b);
    printf("Enter third Number : ");
    scanf("%d",&c);
    printf("Enter fourth Number : ");
    scanf("%d",&d);

    sum = (a+b+c+d);
    avg = sum/4;

    printf("Average of four Numbers :- %d",avg);

}