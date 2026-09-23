// C Program to find gross salary.

#include<stdio.h>

void main()
{
    float basic, hra, da, gross;

    printf("Enter basic Salary :- ");
    scanf("%f",&basic);

    if (basic < 10000) {
        hra = basic * 0.20;
        da = basic * 0.80;
    } 
    else 
    {
        hra = basic * 0.25;
        da = basic * 0.90;
    }

    gross = basic + hra + da;

    printf("HRA = %.2f\n", hra);
    printf("DA = %.2f\n", da);
    printf("Gross Salary = %.2f\n", gross);

}