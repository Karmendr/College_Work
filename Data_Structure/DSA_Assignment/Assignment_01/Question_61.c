// Write a C program in c to swap two numbers by using call by value and call by reference

#include<stdio.h>

void callByValue(int a,int b);
void callByReference(int *a,int *b);


void main()
{
    int a = 10,b = 20;

    printf("Value of a and b before call by value\n");
    printf("\nValue of a : %d",a);
    printf("\nValue of b : %d",b);
    callByValue(a,b);
    printf("\nValue of a and b after call by value");
    printf("\nValue of a : %d",a);
    printf("\nValue of b : %d",b);

    printf("\nValue of a and b before call by reference");
    printf("\nValue of a : %d",a);
    printf("\nValue of b : %d",b);
    callByReference(&a,&b);
    printf("\nValue of a and b after call by reference");
    printf("\nValue of a : %d",a);
    printf("\nValue of b : %d",b);
}

void callByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void callByReference(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}