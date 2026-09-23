// 6. C Program to Calculate Area of Circle.

#include<stdio.h>

void main()
{
    float r,area,pi = 3.14;
    printf("Enter radius :- ");
    scanf("%f",&r);
    area = pi*r*r;
    printf("Area of Circle :- %f",area);
}