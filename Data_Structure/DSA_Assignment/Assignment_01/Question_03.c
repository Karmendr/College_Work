// 3. C Program to Calculate Area and Circumference of Circle.

#include<stdio.h>

void main()
{
    int r;
    float pi = 3.14;
    printf("Enter Radius of a Circle :- ");
    scanf("%d",&r);
    float area = pi*r*r;
    printf("\nArea of a Circle :- %f",area);
    float c = 2*pi*r;
    printf("\nCircumference of a Circle :- %f",c);
}