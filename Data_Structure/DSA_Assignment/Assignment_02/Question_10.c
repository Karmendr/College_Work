// WAP in C to find area of triangle where all three sides take from user.

#include<stdio.h>

float squareRoot(int n);

void main()
{
    int a,b,c;
    printf("Enter AB side :- ");
    scanf("%d",&a);
    printf("Enter BC side :- ");
    scanf("%d",&b);
    printf("Enter AC side :- ");
    scanf("%d",&c);
    int s = (a+b+c)/2;
    int n = (s*(s-a)*(s-b)*(s-c));
    float area = squareRoot(n);
    printf("Area of Triangle = %.2f",area);
}

float squareRoot(int n)
{
    float n1,n2;
    for(int i = 1; i <= (n/2); i++)
    {
        if(n==(i*i))
            return (float)i;
        else if(n<(i*i))
        {
            n1 = i-1;
            n2 = i;
            break;
        }
    }

    float root = n1+((n-(n1*n1))/((n2*n2)-n1*n1));
    return root;
}