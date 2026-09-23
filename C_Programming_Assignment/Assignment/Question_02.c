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
    if(n%2==0 && n%3==0)
        printf("Number is divisible by 2 and 3");
    else
        printf("Number is not divisible by 2 and 3");
    return 0;
}