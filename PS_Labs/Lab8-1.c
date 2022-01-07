#include <stdio.h>
int main(void){
    int num,x;
    double h[x], sumh, avg;

    printf("Please enter number of students> ");
    scanf("%d", &num);
    sumh = 0;
    for(int i =0; i < num ;i++){
        printf("Please enter student heigth [%d]> ", i+1);
        scanf("%lf", &h[i]);
        sumh += h[i];
    }
    avg = sumh/num;
    printf("Average higth: %.2f", avg);
    
    return (0);
}