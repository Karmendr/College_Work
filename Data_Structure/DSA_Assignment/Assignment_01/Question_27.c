// C/C++ program to checks whether it is a vowel or a consonant.

#include<stdio.h>

void main()
{
    char ch;
    printf("Enter a alphabet character :- ");
    scanf("%c",&ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("it is vowel");
    else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("it is vowel");
    else printf("it is consonant");
}