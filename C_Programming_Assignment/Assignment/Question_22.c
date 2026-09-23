#include <stdio.h>

int main() {

    /*
       Author : Karmendra Deval
       Roll Number : Y26271015
    */

    int a, b, c;

    printf("Enter three numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b) 
    {
        if (a >= c)
            printf("Largest number is %d\n", a);
        else
            printf("Largest number is %d\n", c);
    } 
    else 
    {
        if (b >= c)
            printf("Largest number is %d\n", b);
        else
            printf("Largest number is %d\n", c);
    }

    return 0;
}

