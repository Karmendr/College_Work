#include<stdio.h>

int main()
{
    /*
       Author : Karmendra Deval
       Roll Number : Y26271015
    */

    int n, a = 0, b = 1, c;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Number is not a non-zero positive integer.");
    }
    else
    {
        while (b < n)
        {
            c = a + b;
            a = b;
            b = c;
        }
        if (b == n || n == 0)
            printf("%d is a Fibonacci number.", n);
        else
            printf("%d is not a Fibonacci number.", n);
    }
    return 0;
}

