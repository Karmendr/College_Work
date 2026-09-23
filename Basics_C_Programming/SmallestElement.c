#include<stdio.h>

int main()
{
    int arr[5] = {6,3,-8,9,7};
    int min = 0;
    for(int i = 0; i < 5; i++)
    {
        if(arr[i]<=min) min = arr[i];
    }
    printf("Smallest Element is :- %d",min);
    return 0;
}