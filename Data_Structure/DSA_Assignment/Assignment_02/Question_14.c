// WAP in C to find odd digit and even digits sum of given number n=12345.

#include<stdio.h>

void main()
{
    int n = 12345;
    int evensum = 0;
    int oddsum = 0;
    while(n!=0)
    {
        int d = n%10;
        if(d%2==0) 
            evensum += d;
        else
            oddsum += d;
        n /= 10;
    }
    printf("Sum of even numbers : %d",evensum);
    printf("\nSum of odd numbers : %d",oddsum);
}