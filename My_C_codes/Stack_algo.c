#include<stdio.h>
#define max 10

int stack[max];
int top = -1;

void push(int x)
{
    if(top == max-1)
    {
        printf("OverFlow!");
    }
    else
    {
        top = top+1;
        stack[top] = x;
        printf("Element pushed!\n");
    }
}

void pop()
{
    if(top == -1)
        printf("UnderFlow!");
    else
    {
        top = top-1;
    }
}

void display()
{
    for(int i = top; i >= 0; i--)
    {
        printf("%d\n",stack[i]);
    }
}

void main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    display();
    pop();
    display();
}
