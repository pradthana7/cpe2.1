/*   Compute the payroll for a company by while loop
Date: 4/09/21   */


#include <stdio.h>
int main(void)

{
    int nums_emp, count;
    double hours, rate, pay, total_pay;
    count = 0;
    total_pay = 0.0;

    printf("Enter number of employees> ");
    scanf("%d", &nums_emp);
    
    while (count<nums_emp)
    {
        printf("Hours> ");
        scanf("%lf", &hours);
        printf("Rate > $");
        scanf("%lf", &rate);

        pay = hours*rate;
        total_pay += pay;
        count +=1;
        
        printf("Pay is $%6.2f\n\n", pay);

    }
    printf("All empolyees processed\n");
    printf("Total payroll is $ %6.2f\n",  total_pay);

    return (0);
}