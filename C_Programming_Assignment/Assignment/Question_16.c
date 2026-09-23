#include<stdio.h>

int main()
{
    /*
       Author : Karmendra Deval
       Roll Number : Y26271015
    */

    int n, count = 0, num = 3, i, isPrime;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while(count < n)
    {
        isPrime = 1;

        for(i = 2; i < num; i++)
        {
            if(num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if(isPrime == 1)
        {
            count++;

            if(count == n)
            {
                printf("The %dth prime number is %d", n, num);
            }
        }
        num++;
    }
    return 0;
}