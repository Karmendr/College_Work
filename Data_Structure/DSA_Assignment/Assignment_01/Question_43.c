// Write a C program to find the sum of even or odd number in array.

#include<stdio.h>

void main()
{
    int arr[10] = {3,54,2,67,43,98,95,5,34,23};

    int evensum = 0, oddsum = 0;

    for(int i = 0; i < 10; i++)
    {
        if(arr[i]%2 == 0) 
            evensum += arr[i];
        else
            oddsum += arr[i];
    }
    printf("Sum of Even numbers :- %d",evensum);
    printf("\nSum of Odd numbers :- %d",oddsum);
}