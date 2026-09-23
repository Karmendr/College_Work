// C/C++ program to sum=1/2!+1/4!+1/6!+1/8!

#include<stdio.h>

void main()
{
    float sum = 0;
    int fact = 1;

    for(int i = 2; i <= 8; i+=2)
    {
        for(int j = i; j >= 1; j--)
        {
            fact *= j;
        }
        sum += (1.0/fact);
        fact = 1;
    }
    printf("Sum of Factorial :- %.3f",sum);
}