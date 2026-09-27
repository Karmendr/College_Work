#include <stdio.h>

int main()
{
    /*
       Author : Karmendra Deval
       Roll Number : Y26271015
    */

    float c, f;

    printf("Enter Fahrenheit :- ");
    scanf("%f", &f);

    c = (f - 32) * (5.0 / 9.0);

    printf("Celsius :- %.2f", c);

    return 0;
}

