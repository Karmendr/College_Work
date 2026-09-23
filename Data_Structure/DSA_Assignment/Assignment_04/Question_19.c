#include<stdio.h>

int main()
{
    int nums[] = {5,10,15,20,25};
    int *ptr = nums + 2;
    printf("%d",*ptr);
    return 0;
}