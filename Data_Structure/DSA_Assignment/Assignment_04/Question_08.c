#include<stdio.h>

void func(int x)
{
    x = x + 2;
}

int main()
{
    int x = 5;
    func(x);
    printf("%d",x);
    return 0;
}