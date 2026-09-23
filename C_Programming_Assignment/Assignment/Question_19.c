#include <stdio.h>

int main() {

    /*
       Author : Karmendra Deval
       Roll Number : Y26271015
    */
   
    int a, b, sum;
    int *ptrA = &a, *ptrB = &b;

    printf("Enter first numbers : ");
    scanf("%d", ptrA);
    printf("Enter second number : ");
    scanf("%d", ptrB);

    sum = *ptrA + *ptrB;

    printf("Sum = %d\n", sum);

    return 0;
}

