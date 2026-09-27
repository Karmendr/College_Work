#include<stdio.h>

void main()
{
    int c,f;
    printf("Enter Fahrenheit :- ");
    scanf("%d",&f);
    c = (f-32)*(5/9);
    printf("Celsius :- %d",c);
}