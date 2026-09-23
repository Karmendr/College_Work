// C Program to Swap of four no’s with using third variable

#include<stdio.h>

void main()
{
    int a,b,c,d,temp;
    printf("Enter value of a :- ");
    scanf("%d",&a);
    printf("Enter value of b :- ");
    scanf("%d",&b);
    printf("Enter value of c :- ");
    scanf("%d",&c);
    printf("Enter value of d :- ");
    scanf("%d",&d);

    printf("Before Swapping");
    printf("\nValue of a :- %d",a);
    printf("\nValue of b :- %d",b);
    printf("\nValue of c :- %d",c);
    printf("\nValue of d :- %d",d);

    temp = a;
    a = b;
    b = c;
    c = d;
    d = temp;

    printf("\nAfter Swapping");
    printf("\nValue of a :- %d",a);
    printf("\nValue of b :- %d",b);
    printf("\nValue of c :- %d",c);
    printf("\nValue of d :- %d",d);
}