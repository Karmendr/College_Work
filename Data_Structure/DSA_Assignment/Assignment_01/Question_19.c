// C Program to find distance in kilometer of given meter

#include <stdio.h>

void main() {
    float meters, kilometers;

    printf("Enter distance in meters: ");
    scanf("%f", &meters);

    kilometers = meters / 1000;

    printf("Distance in Kilometers: %.3f km\n", kilometers);
}