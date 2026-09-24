#include<stdio.h>

int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array Elements : \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int avg, sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    avg = sum/n;
    printf("Average of array elements : %d",avg);
    return 0;
}