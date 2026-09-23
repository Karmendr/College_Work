/* Write a program to give bonus according to grade of employees. There are only following
   three grades available. 
   Employee        Grades Bonus
    101                1000/-
    102                1500/-
    103                2000/-
*/

#include<stdio.h>

void main()
{
    int gread;
    printf("Select your gread under this three gread (101, 102, and 103) : ");
    scanf("%d",&gread);

    if(gread==101)
        printf("Your Bonus is 1000/-");
    else if(gread==102)
        printf("Your Bonus is 1500/-");
    else if(gread==103)
        printf("Your Bonus is 2000/-");
    }