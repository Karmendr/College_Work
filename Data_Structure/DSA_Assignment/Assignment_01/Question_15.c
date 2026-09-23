#include<stdio.h>

void main()
{
    int a,b,c,temp;
    printf("Enter value of a :- ");
    scanf("%d",&a);
    printf("Enter value of b :- ");
    scanf("%d",&b);
    printf("Enter value of c :- ");
    scanf("%d",&c);

    printf("Before Swapping");
    printf("\nValue of a :- %d",a);
    printf("\nValue of b :- %d",b);
    printf("\nValue of c :- %d",c);

    temp = a;
    a = b;
    b = c;
    c = temp;

    printf("\nAfter Swapping");
    printf("\nValue of a :- %d",a);
    printf("\nValue of b :- %d",b);
    printf("\nValue of c :- %d",c);
}