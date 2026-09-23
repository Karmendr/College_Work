#include <stdio.h>

int main() {

    /*
       Author : Karmendra Deval
       Roll Number : Y26271015
    */

    float x, y, p, q, m, n;

    printf("Enter first point (x, y): \n");
    scanf("%f %f", &x, &y);
    printf("Enter second point (p, q): \n");
    scanf("%f %f", &p, &q);
    printf("Enter third point (m, n): \n");
    scanf("%f %f", &m, &n);

    float area = x * (q - n) + p * (n - y) + m * (y - q);

    if (area == 0)
        printf("The points are collinear.\n");
    else
        printf("The points are not collinear.\n");
    return 0;
}

