#include<stdio.h>;

int main()
{
    int n;
    printf("Enter Number of Array Elements :- ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array Elements :- \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Your array is :- \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    int even = 0, odd = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i]%2 == 0) even++;
        else odd++;
    }
    printf("\nTotal number of Even Numbers is :- %d",even);
    printf("\nTotal number of Odd Numbers is :- %d",odd);
    return 0;
}