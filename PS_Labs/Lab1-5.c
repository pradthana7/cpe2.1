#include <stdio.h>
int main(void)
{
    int n1, n2;
    double n3;

    // input
    printf("Please enter an interger number (n1)> ");
    scanf("%d", &n1);
    printf("Please enter an interger number (n2)> ");
    scanf("%d", &n2);

    n3 = (double)n1/(double)n2;
    
    //out put
    printf("n1 = %d and n2 = %d\n", n1,n2);
    printf("So, n3 = %.6f\n", n3);
    
    return (0);
}