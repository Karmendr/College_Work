// WAP in C to find all arithmetic operations (+,-,*,/) for two input(Integer) from user

#include<stdio.h>

void main()
{
    int a,b;
    printf("Enter the vale of a = ");
    scanf("%d",&a);
    printf("Enter the vale of b = ");
    scanf("%d",&b);

    printf("Addition = %d",(a+b));
    printf("\nSubtraction = %d",(a-b));
    printf("\nMultiplication = %d",(a*b));
    printf("\nDivision = %d",(a/b));
}