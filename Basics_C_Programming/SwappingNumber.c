#include<stdio.h>

int main()
{
    int a = 10, b = 20, c = 0;
    c = a;
    a = b;
    b = c;
    printf("Value of a is :- %d",a);
    printf("\nValue of b is :- %d",b);
    return 0;
}