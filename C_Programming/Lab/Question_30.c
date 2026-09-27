#include <stdio.h>

int findGCD(int a, int b)
{
    int i, gcd = 1;

    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }

    return gcd;
}

int findLCM(int a, int b)
{
    int gcd = findGCD(a, b);
    return (a * b) / gcd;
}

int main()
{
    /*
       Author : Karmendra Deval
       Roll Number : Y26271015
    */

    int a, b, gcd, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    gcd = findGCD(a, b);
    lcm = findLCM(a, b);

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}