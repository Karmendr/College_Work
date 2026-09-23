// WAP in C to find the Size of a variable

#include<stdio.h>

void main()
{
    int a = 10;
    char ch = 'a';
    float fl = 34.23;
    double d = 34.678;
    printf("Size of Integer Variable is : %d",sizeof(a));
    printf("\nSize of Character Variable is : %d",sizeof(ch));
    printf("\nSize of Fload Variable is : %d",sizeof(fl));
    printf("\nSize of Double Variable is : %d",sizeof(d));
}