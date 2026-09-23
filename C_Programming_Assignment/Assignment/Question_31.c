#include <stdio.h>

int power(int x, int n)
{
    if (n == 0)
        return 1;

    return x * power(x, n - 1);
}

int main()
{
    /*
       Author : Karmendra Deval
       Roll Number : Y26271015
    */

    int x, n, result;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    result = power(x, n);

    printf("%d^%d = %d\n", x, n, result);

    return 0;
}

