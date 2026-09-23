// WAP in C to find ASCII Value of a Character

#include<stdio.h>

void main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    int ascii = (int)ch;
    printf("ASCII value of %c : %d",ch,ascii);
}