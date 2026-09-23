#include<stdio.h>

void func()
{
    static int count = 0;
    count++;
    printf("%d",count);
}

int main()
{
    func();
    func();
    func();

    return 0;
}