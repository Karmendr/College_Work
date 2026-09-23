// 5. C Program to Calculate Area of Right angle Triangle.

#include<stdio.h>

void main()
{
    float b,h;
    printf("Enter base :- ");
    scanf("%f",&b);
    printf("Enter height :- ");
    scanf("%f",&h);
    float area = ((b*h)/2.0);
    printf("Area of right angel traingle :- %.2f",area);
}