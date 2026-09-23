// WAP in C, Read the value of a, b, and c through keyboard. Add them and after addition check
// if it is in the range of 100 and 200 or not.

#include<stdio.h>

void main()
{
    int a,b,c;
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);
    printf("Enter value of a : ");
    scanf("%d",&c);

    int add = a+b+c;

    if(add>=100 && add<=200)
        printf("it is in the range of 100 and 200");
    else
        printf("it is not in the range of 100 and 200");
}