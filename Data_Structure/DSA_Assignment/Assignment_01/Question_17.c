//  C Program to convert temperature from degree centigrade to Fahrenheit

#include<stdio.h>

void main()
{
    float c,f;
    printf("Enter degree Celsius :- ");
    scanf("%f",&c);
    f = ((9*c)/5)+32;
    printf("Fahrenheit :- %f",f);
}