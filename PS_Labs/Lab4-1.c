#include <stdio.h>
int main(void){
    int n, sum;

    printf("Please enter a positive number> ");
    scanf("%d", &n);
    sum = 0;
    for(  int i=1; i < n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {   printf("%d\n", i);
            sum += i;   
        }
    }
    printf("Summation: %d\n",sum);          /* print เมื่อสุดท้ายคำสั่ง for loop  */
    return (0);
}