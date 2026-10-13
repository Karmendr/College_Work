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
    int even = 0;
    int odd = 0;
    for(int i = 0; i < n; i++)
    {
        if(i%2==0)
            even++;
        else
            odd++;
    }
    printf("Number of Even elements : %d\n",even);
    printf("Number of Odd elements : %d",odd);
}