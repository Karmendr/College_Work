// Write a C program to find out maximum in array.

#include<stdio.h>

void main()
{
    int arr[5] = {45,6,78,34,89};
    int max = 0;

    for(int i = 0; i < 5; i++)
    {
        if(arr[i]>=max)
            max = arr[i];
    }
    printf("Maximum Element :- %d",max);
}