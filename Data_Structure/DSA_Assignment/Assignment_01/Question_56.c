// Write a C program to swap first element with last, second to second last and vice versa in 10X10 array

#include <stdio.h>

int main()
{
    int arr[10][10], temp;

    printf("Enter 100 elements:\n");

    // Input
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Swapping
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[9-i][9-j];
            arr[9-i][9-j] = temp;
        }
    }

    // Print array
    printf("\nArray after swapping:\n");

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}