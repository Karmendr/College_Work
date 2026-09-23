#include<stdio.h>

void main()
{
    int arr[10] = {0,0,0,2,3,6,7,8,4,7};

    for(int i = 0; i < 9; i++)
    {
        int count = 1;
        if(arr[i] == -1)
            continue;
        for(int j = i+1; j < 10; j++)
        {
            if(arr[i] == arr[j])
            {
                arr[j] = -1;
                count++;
            }
        }
        printf("element %d is %d times repeated \n",arr[i],count);
    }
}