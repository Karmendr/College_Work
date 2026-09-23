#include<stdio.h>

int main()
{
    int a = 10, b = 20;
    const int *ptr = &a;
    printf("%d",*ptr);
    ptr = &b;
    printf("%d",*ptr);
    return 0;
}