#include<stdio.h>

int main()
{
    /*
       Author : Karmendra Deval
       Roll Number : Y26271015
    */

    int roll,m1,m2,m3,total;
    char name[50];
    float per;
    printf("Enter Roll No. : ");
    scanf("%d",&roll);
    printf("Enter Name : ");
    scanf("%s",&name);
    printf("Enter Marks of 3 subjects : \n");
    scanf("%d %d %d",&m1,&m2,&m3);

    total = m1 + m2 + m3; 
    per = total / 3.0;

    printf("\nRoll Number: %d", roll); 
    printf("\nName: %s", name); 
    printf("\nTotal Marks: %d", total); 
    printf("\nPercentage: %.2f", per);

    if(per >= 60) 
        printf("\nDivision: First Division"); 
    else if(per >= 50) 
        printf("\nDivision: Second Division"); 
    else if(per >= 40) 
        printf("\nDivision: Third Division"); 
    else 
        printf("\nDivision: Fail");
    return 0;
}