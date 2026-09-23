#include <stdio.h>

int main() {

    /*
       Author : Karmendra Deval
       Roll Number : Y26271015
    */
   
    int r1, c1, r2, c2;

    printf("Enter rows and columns of matrix A: \n");
    scanf("%d %d", &r1, &c1);
    int A[10][10];
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);

    printf("Enter rows and columns of matrix B: \n");
    scanf("%d %d", &r2, &c2);
    int B[10][10];
    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &B[i][j]);

    if (r1 != r2 || c1 != c2) {
        printf("Matrices are not of equal dimensions. Cannot proceed.\n");
        return 0;
    }

    int sumA = 0, sumB = 0, sumAB = 0;

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            sumA += A[i][j];
            sumB += B[i][j];
            sumAB += (A[i][j] + B[i][j]);
        }
    }

    printf("Sum of elements of A = %d\n", sumA);
    printf("Sum of elements of B = %d\n", sumB);
    printf("Sum of elements of A+B = %d\n", sumAB);

    int largest = sumA;
    if (sumB > largest) largest = sumB;
    if (sumAB > largest) largest = sumAB;

    printf("Largest value among the three sums = %d\n", largest);

    return 0;
}