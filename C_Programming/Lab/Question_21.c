#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979

int main() {

    /*
       Author : Karmendra Deval
       Roll Number : Y26271015
    */
   
    float l;
    printf("Enter length l (in cms): ");
    scanf("%f", &l);

    float diskArea = PI * l * l;
    float sphereSurfaceArea = 4 * PI * l * l;
    float cylinderSurfaceArea = 2 * PI * l * l + 2 * PI * l * l; 
    float slantHeight = sqrt((l / 2) * (l / 2) + l * l);
    float pyramidSurfaceArea = l * l + 2 * l * slantHeight; 

    printf("\nArea of disk of radius %.2f = %.2f sq cm\n", l, diskArea);
    printf("Surface area of sphere of radius %.2f = %.2f sq cm\n", l, sphereSurfaceArea);
    printf("Surface area of cylinder of radius %.2f and length %.2f = %.2f sq cm\n", l, l, cylinderSurfaceArea);
    printf("Surface area of right pyramid (square base, side %.2f, height %.2f) = %.2f sq cm\n", l, l, pyramidSurfaceArea);

    return 0;
}