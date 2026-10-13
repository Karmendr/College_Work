// #include<stdio.h>

// #define  max 10
// int stack[max];
// int clone[max];
// int topstack = -1;
// int topclone = -1;

// void pushInstack(int x)
// {
//     if(topstack == max-1)
//         printf("OverFlow!\n");
//     else
//     {
//         topstack = topstack+1;
//         stack[topstack] = x;
//     }
// }

// void pushInclone(int n)
// {
//     topclone = topclone+1;
//     clone[topclone] = n;
// }

// int popfromstack()
// {
//     int temp;
//     temp = stack[topstack];
//     topstack--;
//     return temp;
// }

// int popfrmonclone()
// {
//     int temp;
//     temp = clone[topclone];
//     topclone--;
//     return temp;
// }

// void displaystack()
// {
//     if (topstack == -1)
//     {
//         printf("Stack is empty!\n");
//         return;
//     }

//     printf("Stack: ");

//     for (int i = 0; i <= topstack; i++)
//     {
//         printf("%d ", stack[i]);
//     }

//     printf("\n");
// }

// void displayclone()
// {
//     if (topclone == -1)
//     {
//         printf("Stack is empty!\n");
//         return;
//     }

//     printf("Stack: ");

//     for (int i = 0; i <= topclone; i++)
//     {
//         printf("%d ", clone[i]);
//     }

//     printf("\n");
// }

// void main()
// {
//     int temp;

//     pushInstack(3);
//     pushInstack(2);
//     pushInstack(1);

//     for(int i = 0; i <= max-1; i++)
//     {
//         for(int j = topstack; j >= 0; j--)
//         {
//             if(j == 0)
//             {
//                 temp = popfromstack();
//                 break;
//             }
//             else
//                 pushInclone(popfromstack());
//         }

//         for(int j = topclone; j > i; j--)
//         {
//             if(j!=i)
//                 pushInstack(popfrmonclone());
//             else
//                 pushInclone(temp);
//         }
//     }
//     displaystack();
//     displayclone();
// }

#include <stdio.h>

#define max 10

int stack[max];
int clone[max];

int topstack = -1;
int topclone = -1;

void pushInstack(int x)
{
    stack[++topstack] = x;
}

void pushInclone(int x)
{
    clone[++topclone] = x;
}

int popfromstack()
{
    return stack[topstack--];
}

void copyStack()
{
    int item;

    if (topstack == -1)
        return;

    item = popfromstack();

    copyStack();

    pushInclone(item);
}

void displayStack()
{
    int i;

    printf("Source : [");

    for (i = topstack; i >= 0; i--)
    {
        printf("%d", stack[i]);

        if (i != 0)
            printf(", ");
    }

    printf("]\n");
}

void displayClone()
{
    int i;

    printf("Clone : [");

    for (i = topclone; i >= 0; i--)
    {
        printf("%d", clone[i]);

        if (i != 0)
            printf(", ");
    }

    printf("]\n");
}

int main()
{
    pushInstack(1);
    pushInstack(2);
    pushInstack(3);

    // Display source before copying
    displayStack();

    // Copy source to clone
    copyStack();

    // Display clone
    displayClone();

    return 0;
}