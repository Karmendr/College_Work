// 7. C Program to Calculate Area of Rectangle.

#include<stdio.h>

void main()
{
    int l,w;
    printf("Enter length :- ");
    scanf("%d",&l);
    printf("Enter width :- ");
    scanf("%d",&w);

    int area = w*l;

    printf("Area of Rectangle :- %d",area);
}