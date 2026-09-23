// WAP in C to find following for A=20 and B=34
// a. Subtraction
// b. Multiplication
// c. Division
// d. Modulo (%)

#include<stdio.h>

void main()
{
    int A = 20, B = 34;
    int sub = A - B;
    int mul = A * B;
    int Div = A / B;
    int mod = A % B;

    printf("Subtraction = %d",sub);
    printf("\nMultiplication = %d",mul);
    printf("\nDivision = %d",Div);
    printf("\nModulo = %d",mod);
}