#include<stdio.h>

void main()
{
    char name[20];
    printf("Enter your name :- ");
    gets(name);
    int rollno;
    printf("\nEnter Roll No. :- ");
    scanf("%d",&rollno);
    char Class[15];
    printf("\nEnter Class :- "); 
    gets(Class);
    char address[30];
    printf("\nEnter your Address :- ");
    gets(address);
    
    printf("*************************");
    printf("*\n  Name :- %s  *",name);
    printf("\n*  Roll No. :- %d  *",rollno);
    printf("\n*  Class :- %s  *",Class);
    printf("\n*  Address :- %s  *",address);
    printf("**************************");
}