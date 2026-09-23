#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the value of A :- ");
    scanf("%d",&a);
    printf("Enter the value of B :- ");
    scanf("%d",&b);
    printf("The value of a and b is :- %d %d",a, b);
    a = a + b;
    b = a - b;
    a = a - b;  
    printf("\nThe value of a and b is :- %d %d",a, b);
    return 0;
}