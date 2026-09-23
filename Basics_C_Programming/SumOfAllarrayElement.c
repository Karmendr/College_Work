#include<stdio.h>

int main()
{
    int n;
    printf("Enter Number of Array Element :- ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter Array elements :- \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    printf("Sum of all element is :- %d",sum);
    return 0;
}