// C/C++ program to find roots of quadratic equations with considered all cases.

#include<stdio.h>

void main()
{
    int a,b,c;
    printf("Enter value of a :- ");
    scanf("%d",&a);
    printf("Enter value of b :- ");
    scanf("%d",&b);
    printf("Enter value of c :- ");
    scanf("%d",&c);

    if(a == 0)
    {
        printf("This is not quadratic equation");
    }
    else
    {
        float D = (b*b)-(4*a*c);

        if(D == 0)
        {
            float r1 = -b/(2*a);
            printf("D is zero than both roots are equal\n");
            printf("root :- %.2f",r1);
        }
        else if(D > 0)
        {
            float r1,r2;
            r1 = (-b+D*D)/(2*a);
            r2 = (-b-D*D)/(2*a);
            printf("roots :- %.2f\t%.2f",r1,r2);
        }
        else
        {
            int realp,imgp;
            realp = -b/(2*a);
            imgp = -(D*D)/(2*a);
            printf("root1 :- %d+(%d)i",realp,imgp);
            printf("\nroot2 :- %d-(%d)i",realp,imgp);
        }
    }
}