#include<stdio.h>

int main()
{
    int a = 5, b = 10;
    int result = (a > b) ? a : (b > 15 ? b : 20);
    printf("%d", result);
    return 0;
}