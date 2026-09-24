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

    int max = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i]>max)
            max = arr[i];
    }

    printf("Maximum Element in array is : %d",max);
    return 0;
}