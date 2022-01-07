#include <stdio.h>
#include <math.h>
#define DOWN 500
int main(void)
{

    int n, price;
    double i,P,x,total;

    printf("Please enter purchase price> ");
    scanf("%d", &price);
    printf("Please the annual interesr rate> ");
    scanf("%lf", &i);
    printf("Please the total number of payments> ");
    scanf("%d", &n);

    // ค้างชำระ = ราคารถ - ดาวน์
    P = (double)price-DOWN;

    // formula monthly installment
    i = (1.0/12.0)*i;
    x = pow((1+i),-n);
    total = i*P/(1-(x));

    printf("The amount borrowed: $%.2f\n", P);
    printf("The monthly payment: $%.2f", total);

    return (0);

}