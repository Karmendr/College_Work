#include<stdio.h>

int main()
{
    int r; 
    float area = 0, c = 0;
    float pi = 3.14;
    printf("Enter Radius of a circle :- ");
    scanf("%d", &r);
    // Area = pi*r*r
    area = pi*r*r;
    printf("Area of Circle is :- %f",area);
    // Circumference = 2*pi*r
    c = 2*pi*r;
    printf("\nCircumference of Circle is :- %f",c);
    return 0;
}