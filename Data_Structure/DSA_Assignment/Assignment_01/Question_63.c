// Write a C program to complete area of rectangle call by reference.

#include<stdio.h>

int areaOfRectangle(int *w,int *l);

void main()
{
    int w,l;
    printf("Enter width :- ");
    scanf("%d",&w);
    printf("Enter length :- ");
    scanf("%d",&l);
    int area = areaOfRectangle(&w,&l);
    printf("Area of Rectangle :- %d",area);
}

int areaOfRectangle(int *w,int *l)
{
    return (*w)*(*l);
}