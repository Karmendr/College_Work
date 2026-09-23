#include<stdio.h>

int main()
{
    /*
       Author : Karmendra Deval
       Roll Number : Y26271015
    */
    int n,check = 1;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(int i = 2; i < n; i++)
    {
        if(n%i == 0)
        {
            check = 0;
            break;
        }
    }

    if(check == 1)
        printf("%d is a prime number",n);
    else 
        printf("%d is not a prime number",n);
    return 0;
}

