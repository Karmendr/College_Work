#include<stdio.h>

void main()
{
    int n1,n2,n3,n4,n5;
    printf("Enter Marks of Hindi :- ");
    scanf("%d",&n1);
    printf("Enter Marks of English :- ");
    scanf("%d",&n2);
    printf("Enter Marks of Maths :- ");
    scanf("%d",&n3);
    printf("Enter Marks of Physics :- ");
    scanf("%d",&n4);
    printf("Enter Marks of Chemistry :- ");
    scanf("%d",&n5);

    int total = n1+n2+n3+n4+n5;
    printf("Total :- %d",total);

    int per = total/5;
    printf("\nPercentage :- %d",per);
}