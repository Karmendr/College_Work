#include<stdio.h>

int main()
{
    /*
       Author : Karmendra Deval
       Roll Number : Y26271015
    */

    int n;
    printf("Enter a Number between 5 to 20 : ");
    scanf("%d",&n);

    if(n>=5 && n<=20)
    {
        for(int i = 1; i <= 10; i++)
        {
            printf("%d X %d = %d\n",n,i,i*n);
        }
    }
    else
        printf("Invalid number!");
    return 0;
}