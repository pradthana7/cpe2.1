#include <stdio.h>
int main(void){
    int speed;
    // รับค่าความเร็วลม __mph
    printf("Please enter a wind speed> "); 
    scanf("%d", &speed);
    // เงื่อนไขความเร็วลม
    if (speed < 25)
        printf("Not a stong wind at %d mph", speed);
    else if (speed <39)
        printf("Strong wind at %d mph",  speed);
    else if (speed < 55)
        printf("Gale at %d mph",  speed);
    else if (speed <= 72)
        printf("Whole gale at %d mph",  speed);
    else 
        printf("Hurricane at %d mph",  speed);

    return (0);
}
