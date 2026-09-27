#include<stdio.h>

int main()
{
    /*
       Author : Karmendra Deval
       Roll Number : Y26271015
    */

    int a, b, c;

    printf("Enter three integer lengths: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && b + c > a && a + c > b)
        printf("Triangle can be formed.");
    else
        printf("Triangle cannot be formed.");
    return 0;
}

