#include <stdio.h>
int main(void){
    char grade;

    printf("Please enter a letter grade> ");    // รับค่า charเข้ามา
    scanf("%c", &grade); 
    
    switch (grade) {
    case 'A':
    case 'a':
            printf("Excellent\n");
            break;
    case 'B':
    case 'b':
            printf("Good\n");
            break;
    case 'C':
    case 'c':
            printf("O.K.\n");
            break;
    case 'D':
    case 'd':
    case 'F':
    case 'f':
            printf("Poor,student is on probation\n");
            break;
    default:
            printf("Invalid letter grade\n");
    }
    return (0);
}