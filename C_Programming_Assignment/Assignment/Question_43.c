#include <stdio.h>

int main()
{
    /*
       Author : Karmendra Deval
       Roll Number : Y26271015
    */

    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 &&
        a + b > c && b + c > a && a + c > b)
    {
        printf("The sides can form a valid triangle.");
    }
    else
    {
        printf("The sides cannot form a valid triangle.");
    }

    return 0;
}

