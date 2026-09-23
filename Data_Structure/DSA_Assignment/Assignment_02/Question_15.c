//  WAP in C to find the simple interest

#include<stdio.h>

void main()
{
    float p,r,t;
    printf("Enter principal : ");
    scanf("%f",&p);
    printf("Enter rate : ");
    scanf("%f",&r);
    printf("Enter time : ");
    scanf("%f",&t);

    float si = (p*r*t)/100;

    printf("Simple Interest :- %.3f",si);
}