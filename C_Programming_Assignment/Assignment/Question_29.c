#include <stdio.h>

int main()
{
    /*
       Author : Karmendra Deval
       Roll Number : Y26271015
    */

    for (int i = 1; i <= 100; i++)
    {
        if (i % 5 == 0)
            continue;

        if (i == 80)
            break;

        printf("%d ", i);
    }

    return 0;
}

