#include <stdio.h>

int main() {

    /*
       Author : Karmendra Deval
       Roll Number : Y26271015
    */
   
    int n, num, digit, sum = 0;

    printf("Enter a positive integer: \n");
    scanf("%d", &n);

    num = n;

    while (n != 0) 
    {
        digit = n % 10;   
        sum = sum + digit;  
        n = n / 10;     
    }

    printf("Sum of digits of %d = %d\n", num, sum);
    return 0;
}

