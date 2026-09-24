#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    int size = sizeof(arr);
    printf("Array Type : Integer\n");
    printf("Array Size : %d bytes\n", size);
    printf("Number of Elements in array : %d\n",size/sizeof(arr[0]));
    
    printf("Element of array : \n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}