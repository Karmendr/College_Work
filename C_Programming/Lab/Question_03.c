#include<stdio.h>

int main()
{
    /*
       Author : Karmendra Deval
       Roll Number : Y26271015
    */

    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    if(n%3==0 && n%13==0)
        printf("Number is divisible by 3 and 13 ");
    else
        printf("Number is not divisible by 3 and 13 ");
    return 0;
}