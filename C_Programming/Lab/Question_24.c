#include <stdio.h>

int main() {

    /*
       Author : Karmendra Deval
       Roll Number : Y26271015
    */
   
    int a, b, choice;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\nMenu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Sum = %d\n", a + b);
            break;

        case 2:
            printf("Difference = %d\n", a - b);
            break;

        case 3:
            printf("Product = %d\n", a * b);
            break;

        case 4:
            if (b != 0)
                printf("Quotient = %d\n", a / b);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;

        case 5:
            if (b != 0)
                printf("Modulus = %d\n", a % b);
            else
                printf("Error: Modulus by zero is not allowed.\n");
            break;

        default:
            printf("Invalid choice. Please enter a number between 1 and 5.\n");
    }

    return 0;
}