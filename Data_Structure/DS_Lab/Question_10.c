#include<stdio.h>

void main()
{
    int n,m;
    printf("Enter size of first array : ");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter first array elements : \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of second array : ");
    scanf("%d",&m);
    int arr2[m];
    printf("Enter first array elements : \n");
        for(int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int merge[n+m];
    for(int i = 0; i < (n+m); i++)
    {
        if(i<n)
            merge[i] = arr1[i];
        else
            merge[i] = arr2[i-n];
    }
    for(int i = 0; i < (n+m); i++)
    {
        printf("%d ",merge[i]);
    }
}