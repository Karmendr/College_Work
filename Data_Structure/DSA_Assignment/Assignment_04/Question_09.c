#include<stdio.h>

int main()
{
    int x = 0, y = 0;
    while(++x<5) y++;
    printf("%d %d",x,y);
    return 0;
}