#include <stdio.h>
int main(void)
{
    char sts;
    int age;
    
    printf("Please enter the age> ");
    scanf("%d", &age);
    
    if (age > 59){
        printf("Please enter the working status> ");
        scanf(" %c", &sts); /* note the space brfore %c ถ้าไม่มีโปรแกรมจะไม่อ่านค่า %c ทำให้โปรแกรมไปทำงานที่ else แทน */
        if (sts == 'W')
            printf("Working senior");
        else
            printf("Retired senior");
    }
    else{
        if (age > 20)
            printf("Adult");
        else{
            if (age >12)
                printf("Teen");
            else
                printf("Child");
        }
    }
    return 0;
}
