#include<stdio.h>

void main()
{
    int a,b,temp;
    printf("Enter value of a :- ");
    scanf("%d",&a);
    printf("Enter value of b :- ");
    scanf("%d",&b);

    printf("Before Swapping");
    printf("\nValue of a :- %d",a);
    printf("\nValue of b :- %d",b);

    temp = a;
    a = b;
    b = temp;

    printf("\nAfter Swapping");
    printf("\nValue of a :- %d",a);
    printf("\nValue of b :- %d",b);
}