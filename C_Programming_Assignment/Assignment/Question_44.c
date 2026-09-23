#include <stdio.h>

int main()
{
    /*
       Author : Karmendra Deval
       Roll Number : Y26271015
    */

    int a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || b + c <= a || a + c <= b)
    {
        printf("Invalid triangle.");
    }
    else if (a == b && b == c)
    {
        printf("The triangle is Equilateral.");
    }
    else if (a == b || b == c || a == c)
    {
        printf("The triangle is Isosceles.");
    }
    else
    {
        printf("The triangle is Scalene.");
    }
    return 0;
}

