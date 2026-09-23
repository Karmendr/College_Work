#include<stdio.h>

int main()
{
    /*
       Author : Karmendra Deval
       Roll Number : Y26271015
    */

    int x;
    int sp, cp, profit;

    printf("Enter number of soap cakes : ");
    scanf("%d", &x);

    sp = 20 * x;
    cp = 15 * x;
    profit = sp - cp;

    printf("Selling Price = Rs. %d\n", sp);
    printf("Profit = Rs. %d\n", profit);
    return 0;
}