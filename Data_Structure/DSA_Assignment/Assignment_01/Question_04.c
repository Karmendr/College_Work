// 4. C Program to Calculate Area of Equilateral Triangle.

#include<stdio.h>
#include<math.h>

void main()
{
    int a;
    printf("Enter side value of Equilateral triangle :- ");
    scanf("%d",&a);
    float area = (sqrt(3)/4)*a*a;
    printf("Area of Equilateral Triangle :- %f",area); 
}