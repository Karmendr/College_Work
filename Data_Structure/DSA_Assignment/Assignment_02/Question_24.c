// WAP in C to calculate gross salary of a person where DA= 15% of basic salary, TA=19% of
// basic salary and HRA=25% of basic salary


#include<stdio.h>

void main()
{
    float basicSalary, hra, da, ta, grossSalary;

    printf("Enter basic Salary :- ");
    scanf("%f",&basicSalary);

    da = basicSalary * 15/100;
    ta = basicSalary * 19/100;
    hra = basicSalary * 25/100;

    grossSalary = da+hra+ta;

    printf("HRA = %.2f", hra);
    printf("\nTA = %.2f", ta);
    printf("\nDA = %.2f\n", da);
    printf("Gross Salary = %.2f\n", grossSalary);

}