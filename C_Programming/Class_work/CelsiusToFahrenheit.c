#include<stdio.h>

void main()
{
    int c,f;
    printf("Enter degree Celsius :- ");
    scanf("%d",&c);
    f = ((9*c)/5)+32;
    printf("Fahrenheit :- %d",f);
}