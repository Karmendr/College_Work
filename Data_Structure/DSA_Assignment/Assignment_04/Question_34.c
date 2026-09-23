#include<stdio.h>

int main()
{
    int x = 10;
    printf("%lu %d",sizeof(x++),x);
    return 0;
}