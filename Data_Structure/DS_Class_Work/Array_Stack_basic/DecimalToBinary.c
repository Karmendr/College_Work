#include<stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

int push(int r)
{
    if(top == MAX-1)
    {
        printf("OverFlow!");
    }
    else
    {
        top++;
        stack[top] = r;
    }
}

void display()
{
    for(int i = top; i >= 0; i--)
    {
        printf("%d ",stack[i]);
    }
}

int main()
{
    int n;
    printf("Enter a Decimal Number : ");
    scanf("%d",&n);
    int temp = n;
    while(n>0)
    {
        int r = n%2;
        push(r);
        n = n/2;
    }
    printf("Binary Digit of %d : ",temp);
    display();
    return 0;
}