// Write a C program to search a key element in array

#include<stdio.h>

void main()
{
    int arr[5] = {34,67,23,45,87};
    int key = 23;
    int check =  0;
    int idx = -1;

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] == key)
        {
            check = 1;
            idx = i;
            break;
        }
            
    }

    if(check == 1)
        printf("Key element is present on index number %d",idx);
    else
        printf("Key element is not present in this array");
}