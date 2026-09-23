// WAP in C to check whether the candidate’s age is greater than 17 or not. If yes , display “
// Eligible for Voting”.

#include<stdio.h>

void main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    if(age>17)
        printf("Eligible for Voting");
    else
        printf("Not eligible for voting");
}