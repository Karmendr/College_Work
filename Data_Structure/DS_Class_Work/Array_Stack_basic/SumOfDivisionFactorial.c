#include<stdio.h>

void main()
{
    int sum = 0;
    int fact = 1;

    for(int i = 1; i <= 5; i++)
    {
        for(int j = i; j >= 1; j--)
        {
            fact *= j;
        }
        sum += (i/fact);
        fact = 1;
    }
    printf("Sum of Factorial :- %d",sum);
}