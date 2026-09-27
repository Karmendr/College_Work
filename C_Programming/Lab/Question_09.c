#include<stdio.h>

int main()
{
    /*
       Author : Karmendra Deval
       Roll Number : Y26271015
    */

    int AB,BC,AC;
    printf("Enter first side of triangle : ");
    scanf("%d",&AB);
    printf("Enter second side of triangle : ");
    scanf("%d",&BC);
    printf("Enter thired side of triangle : ");
    scanf("%d",&AC);

    if(AB==BC && BC==AB)
        printf("Equilateral Triangle");
    else
        printf("Not an Equilateral Triangle");
    return 0;
}