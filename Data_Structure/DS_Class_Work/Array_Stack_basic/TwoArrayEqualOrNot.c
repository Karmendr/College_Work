#include<stdio.h>

void main()
{
    int n;
    printf("Enter number of elements array : ");
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];


    printf("Enter 1st array elements : \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("Enter 2nd array elements : \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr2[i]);
    }

    int flag;
    for(int i = 0; i < n; i++)
    {
        flag = 0;
        for(int j = 0; j < n; j++)
        {
            if(arr1[i]==arr2[j])
            {
                flag = 1;
                arr2[j] = -1;
            }
        }
        if(flag==0)
            break;
    }

    if(flag == 1)
        printf("Yes");
    else
        printf("No");
}