#include<stdio.h>
#define pi 3.14

int main()
{
    /*
       Author : Karmendra Deval
       Roll Number : Y26271015
    */

    float r,area;
    printf("Enter Radius of a circle : ");
    scanf("%f",&r);
    area = pi*r*r;
    printf("Area of a circle : %.3f",area);
    return 0;
}