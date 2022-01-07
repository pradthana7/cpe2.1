#include <stdio.h>
int main(void)
{
    int BE_year;
    int AD_year;
    printf("Enter a BE year> ");
    scanf("%d", &BE_year);

    // เปลี่ยนจาก พศ-->คศ
    AD_year = BE_year - 543;
    //printf("%d\n", AD_year);

    // เงื่อนไขการหาปีที่มีเดือน ก.พ. 28,29วัน?
    if (AD_year % 4 == 0 && AD_year%100 != 0 || AD_year % 400 == 0)
        printf("This is the leap year and February has 29 days.");
    else
        printf("This is the common year and February has 28 days.");

    return (0);
}