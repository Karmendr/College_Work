#include <stdio.h>

int main()
{
    /*
       Author : Karmendra Deval
       Roll Number : Y26271015
    */

    float a, b, average;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    average = (a + b) / 2;

    printf("Average = %.2f\n", average);

    return 0;
}

