#include <stdio.h>
float toInch(float cen);
int main(){
    int cen;
    float res;
    printf("Enter length in centimeters> ");
    scanf("%d", &cen);
    res = toInch(cen);
    printf("%d centimeter(s) is %.4f inches.", cen, res);
    /*  Table Cen to inch
    printf("centimeters    inches\n");
    for(cen = 1; cen < 21; cen++){
        inch = cen*0.3937;
        printf("%5d%16.4f\n", cen, inch);
        */
       return 0;
    }
    
float toInch(float cen){
    float inch,i;
    i = cen;
    inch = cen*0.3937;
    return (inch);
}