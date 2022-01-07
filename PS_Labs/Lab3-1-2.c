/*      จงเขียนโปรแกรมภาษาซีด้วย multiple-alternative if statement โดยให้ผู้ใช้ป้อนค่ามาตราริก
เตอร์(Richter magnitude scale) ที่ใช้ในการวัดขนาดของแผ่นดินไหวเป็นตัวเลขจํานวนจริง     */

#include <stdio.h>
int main(void){
float n;
char c;

printf("Please enter a Richter scale number> ");
scanf("%f", n);
if (n < 5.0){
    c = 'Little or not damage'  /*  c is characterisation   */
}
else if (n < 5.5){              /*  n is Richter scale number   */
    c = 'Some damage'
}   
else if (n < 6.5){
    c = 'Serious damage: walla may crack or fall'
}
else if (n < 7.5){
    c = 'Disaster: houses and buidings may collapse'
}
else {
    c = 'Catastrophe: most buildings deatroyed'
}

printf("Richter magnitude = %f, %c", n, c);

    return (0);
}