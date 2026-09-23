#include<stdio.h>

int main()
{
    int arr[5] = {6,2,9,5,7};
    int max = 0;
    for(int i = 0; i < 5; i++)
    {
        if(arr[i]>=max) max = arr[i];
    }
    printf("Greater Element :- %d",max);
    return  0;
}