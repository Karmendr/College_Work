#include<stdio.h>

void main()
{
    int n,r;
    printf("Enter the value of n :- ");
    scanf("%d",&n);
    printf("\nEnter the value of r :- ");
    scanf("%d",&r);
    int factn = 1, factnr = 1, factr = 1;
    for(int i = n; i >= 1; i--)
    {
        factn *= i;
        if(i<=(n-r))
        {
            factnr *= i;
        }
        if(i<=r)
        {
            factr *= i;
        }
    }
    int npr = factn/factnr;
    printf("Permutation :- %d",npr);
    int ncr = (factn)/(factr*factnr);
    printf("\nCombination :- %d",ncr);
}