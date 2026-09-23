#include<stdio.h>

int main()
{
    char *ptr = "Hello World";
    printf("%c", *&*ptr);
    return 0;
}