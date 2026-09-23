#include <stdio.h>

int main()
{
    /*
       Author : Karmendra Deval
       Roll Number : Y26271015
    */

    float x1, y1, x2, y2, x3, y3;
    float area;

    printf("Enter coordinates of first point (x1, y1): \n");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates of second point (x2, y2): \n");
    scanf("%f %f", &x2, &y2);

    printf("Enter coordinates of third point (x3, y3): \n");
    scanf("%f %f", &x3, &y3);

    area = x1 * (y2 - y3)
         + x2 * (y3 - y1)
         + x3 * (y1 - y2);

    if (area == 0)
    {
        printf("The points are collinear.");
    }
    else
    {
        printf("The points form a triangle.");
    }
    return 0;
}

