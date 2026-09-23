// Write a C program to find out minimum in array.

#include<stdio.h>

void main()
{
    int arr[5] = {45,6,78,-34,89};
    int min = 0;

    for(int i = 0; i < 5; i++)
    {
        if(arr[i]<=min)
            min = arr[i];
    }
    printf("Minimum Element :- %d",min);
}