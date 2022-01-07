/*
Compute the payroll for a company by for loop
Date: 4/09/21  
*/
#include <stdio.h>
int main(void)
{   int count, nums_emp;
    double rate, hours, total, pay;

    printf("Enter number of employees> ");
    scanf("%d", &nums_emp);
    total=0.0;
    for (count=0;
        count<nums_emp;
        count+=1){
        printf("Hours> ");
        scanf("%lf", &hours);
        printf("Rate> $");
        scanf("%lf", &rate);
        pay = rate*hours;
        printf("Pay is $%6.2f\n\n", pay);
        total += pay;

    }
    printf("All employees processed\n");
    printf("Total payroll is $%6.2f\n", total);


    return (0);
}