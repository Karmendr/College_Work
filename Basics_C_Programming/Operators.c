#include<stdio.h>

int main()
{
    /*
    -> Operators
        Arithmetic Operators
        Relational Operators
        Logical Operators
        Bitwise Operators
        Assignment Operators
        Misc Operators
    */

    // 1. Arithmetic Operators
    int a = 6, b = 7, c = 8;

    printf("The sum of two variable is :- %d", a+b);
    printf("\nThe difference of two variable is :- %d", b-a);
    printf("\nThe multiply of two variable is :- %d", a*b);
    printf("\nThe division of two variable is :- %d", b/a);
    printf("\nThe modulas of two variable is :- %d", b%a);

    // 2. Relational Operators

    printf("\n%d", a==b);
    printf("\n%d", a<b);
    printf("\n%d", a>b);
    printf("\n%d", a<=b);
    printf("\n%d", a>=b);
    printf("\n%d", a!=b);

    // 3. Logical Operators

    int i = 0, j = 1;

    printf("\n Logical And %d",i&&j);
    printf("\n Logical Or %d",i||j);
    printf("\n Logical Not %d",!i);
    printf("\n Logical Not %d",!j);

}