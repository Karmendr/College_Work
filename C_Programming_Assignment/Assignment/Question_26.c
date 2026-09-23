#include <stdio.h>

int main()
{
    /*
       Author : Karmendra Deval
       Roll Number : Y26271015
    */

    int num, original, digit, digits = 0, sum = 0, power, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count number of digits
    while (num != 0)
    {
        digits++;
        num = num / 10;
    }

    num = original;

    // Calculate Armstrong sum
    while (num != 0)
    {
        digit = num % 10;

        power = 1;
        for (i = 1; i <= digits; i++)
        {
            power = power * digit;
        }

        sum = sum + power;
        num = num / 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}