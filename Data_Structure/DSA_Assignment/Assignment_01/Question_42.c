// Write a C program to find the total number of odd/even numbers in array.

#include<stdio.h>

void main()
{
    int arr[10] = {3,54,2,67,43,98,95,5,34,23};

    int even = 0, odd = 0;

    for(int i = 0; i < 10; i++)
    {
        if(arr[i]%2 == 0) 
            even++;
        else
            odd++;
    }
    printf("Total number of Even :- %d",even);
    printf("\nTotal number of Odd :- %d",odd);
}