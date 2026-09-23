/*WAP in C that reads the customer number and power consumed and prints the amount to
  be paid by the customer. 
    Consumption              Rate of Units Charge
    ------------------------------------------------------
    0-200                      Rs.0.50 per unit
    201-400                    Rs.100 plus Rs.0.65 per unit excess 200
    401-600                    Rs.230 plus Rs.0.80 per unit excess of 400.
*/

#include<stdio.h>

void main()
{
    int cn,units;
    float amount;
    printf("Enter customer number : ");
    scanf("%d",&cn);
    printf("Enter power consumed (units) : ");
    scanf("%d",&units);

    if(units>=0 && units<=200)
    {
        amount = units*0.50;
    }
    else if(units>=201 && units<=400)
    {
        amount = 100 + (units - 200) * 0.65;
    }
    else if(units>=401 && units<=600)
    {
        amount = 230 + (units - 400) * 0.80;
    }
    else
    {
        printf("Rate information for this consumption is not provided.\n");
    }

    printf("\nCustomer Number: %d",cn);
    printf("\nPower Consumed: %d units", units);
    printf("\nAmount to be paid: Rs. %.2f", amount);
}