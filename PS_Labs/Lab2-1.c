#include <stdio.h>

int main()
{
    int n1, n2, sum, product, result, h, th;
    printf("Please enter an interger number (n1)> ");
    scanf("%d", &n1);
    printf("Please enter an interger number (n2)> ");
    scanf("%d", &n2);

    sum = n1 + n2;
    product = n1 * n2;
    result = sum * product;
    
    // แยกหลัก h = hundreds, th = Thousands
    h = (result/100)%10;
    th = (result/1000)%10; 
    // printf("h = %d\n", h);
    // printf("th = %d\n", th);
    
    printf("Result: %d\n", result);
    if (h > th)
        printf("Bingo!");
    else
        printf("Oh no!");
    return 0;
}
