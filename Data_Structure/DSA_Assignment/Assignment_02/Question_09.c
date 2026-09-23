// WAP in C to find all arithmetic operations (+,-,*,/) for two input(float) from user.

#include<stdio.h>

void main()
{
    float a,b;
    printf("Enter the vale of a = ");
    scanf("%f",&a);
    printf("Enter the vale of b = ");
    scanf("%f",&b);

    printf("Addition = %.2f",(a+b));
    printf("\nSubtraction = %.2f",(a-b));
    printf("\nMultiplication = %.2f",(a*b));
    printf("\nDivision = %.2f",(a/b));
}