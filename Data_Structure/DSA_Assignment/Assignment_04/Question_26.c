#include<stdio.h>

int main()
{
    int arr[10];
    printf("%d",sizeof(arr)/sizeof(arr[0]));
    return 0;
}