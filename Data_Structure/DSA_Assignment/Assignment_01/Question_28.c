// C/C++ program to check whether a character is an alphabet or not

#include<stdio.h>

void main()
{
    char ch;
    printf("Enter a character :- ");
    scanf("%c",&ch);
    int n = (int)ch;

    if(n>=65 && n<=90) 
        printf("Character is an alphabet");
    else if(n>=97 && n<=122)
        printf("Character is an alphabet");
    else printf("Character is not an alphabet");
}