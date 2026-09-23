#include<stdio.h>

int main()
{
    int arr[] = {5,3,2,8,9};
    int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    int avg = sum/5;
    printf("Average :- %d",avg);
    return 0;
}