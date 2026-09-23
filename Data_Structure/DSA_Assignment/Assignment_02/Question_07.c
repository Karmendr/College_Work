// WAP in C to find following for A=14.56 and B=24.3
// a. Subtraction
// b. Multiplication
// c. Division

#include<stdio.h>

void main()
{
    float A = 14.56, B = 24.3;
    float sub = A - B;
    float mul = A * B;
    float div = A / B;

    printf("Subtraction = %.2f",sub);
    printf("\nMultiplication = %.2f",mul);
    printf("\nDivision = %.2f",div);
}