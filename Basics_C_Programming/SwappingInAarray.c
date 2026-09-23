#include<stdio.h>

int main()
{
    int arr[5] = {5,6,9,2,4};
    printf("without swapping array :- \n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    int temp = arr[4];
    arr[4] = arr[0];
    arr[0] = temp; 
    printf("\nAfter swapping array :- \n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}