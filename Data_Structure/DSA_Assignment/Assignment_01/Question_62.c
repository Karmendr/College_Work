// Write a C program using call by reference to find area of circle and value would be display.

#include<stdio.h>

float areaOfaCircle(int *r);

int main()
{
    int r;
    printf("Enter radius of a circle :- ");
    scanf("%d",&r);

    float area = areaOfaCircle(&r);

    printf("Area of a Circle :- %.2f",area);
    return 0;
}

float areaOfaCircle(int *r)
{
    float pi = 3.14;
    return pi*(*r)*(*r);
}