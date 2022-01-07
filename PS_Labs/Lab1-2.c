#include <stdio.h>
#define PI 3.14159
int main(void)
{
    double area,r,cir,dia;
    printf("Please enter a diameter> ");
    scanf("%lf", &dia);

    r = dia/2.0;
    area = PI*r*r;
    cir = 2*PI*r;


    printf("The area is %.4f\n", area);
    printf("The circumference is %.4f", cir);
    return (0);
}