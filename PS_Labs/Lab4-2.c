#include <stdio.h>
#include <math.h>
int main (void)
{
    int n, sum;

    printf("Please enter a positive number> ");
    scanf("%d", &n);
    /*  ต้องกำหนดค่าตัวแปรที่ควบคุม while loop ก่อนเสมอไม่งั้นคำสั่งบางส่วนของลูปจะไม่ทำงาน */
    int j=0;
    while ( j <= n ){
        sum += (3)*pow(2,j);
        j++;
    }
    printf("Summation: %d \n",sum);
    return (0);
}