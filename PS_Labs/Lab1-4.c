#include <stdio.h>
#define PI 3.14159
int main (void)
{
    double rim, 
    dia_out, dia_in, 
    rad_out, rad_in,
    area_out,area_in;

    printf("Please enter a diameter of the outer circle> ");
    scanf("%lf", &dia_out);

    printf("Please enter a diameter of the inner circle> ");
    scanf("%lf", &dia_in);

    rad_out = dia_out/2.0;
    rad_in = dia_in/2.0;
    area_out = PI*rad_out*rad_out;
    
    area_in = PI*rad_in*rad_in;
    rim = area_out - area_in;

    printf("The rim area is %.4f\n", rim);
    printf("The area out is %.4f\n", area_out);
    printf("The area in is %.4f\n", area_in);
    

    return (0);
}
