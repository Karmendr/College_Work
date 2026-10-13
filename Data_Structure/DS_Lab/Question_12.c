#include<stdio.h>

void main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array element : \n");
    for(int i  = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int seven = 0;
    int sodd = 0;
    for(int i = 0; i < n; i++)
    {
        if(i%2==0)
            seven += arr[i];
        else
            sodd += arr[i];
    }
    printf("Sum of Even elements : %d\n",seven);
    printf("Sum of Odd elements : %d",sodd);
}