#include <stdio.h>

int main()
{
    /*
       Author : Karmendra Deval
       Roll Number : Y26271015
    */

    float p, r, t, si;

    printf("Enter principal amount: ");
    scanf("%f", &p);

    printf("Enter rate of interest: ");
    scanf("%f", &r);

    printf("Enter time in years: ");
    scanf("%f", &t);

    si = (p * r * t) / 100;

    printf("Simple Interest = %.2f\n", si);

    return 0;
}

