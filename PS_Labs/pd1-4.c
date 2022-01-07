/*  ตารางเลขยกกำลัง */
#include <stdio.h>
#include <math.h>
int main(void){
    int num,result;
    num = 0;
    printf("number  exponent\n");
    while (num < 7)
    {
        result = pow(2,num);
        printf("%d          %2d\n", num,result);
        num++;
    }
    return (0);
}