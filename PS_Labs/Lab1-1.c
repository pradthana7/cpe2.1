#include <stdio.h>
int main(void)
{
    int n1,n2,new;
    printf("Please enter an integer number (n1)> ");
    scanf("%d",&n1);

    printf("please enter an interger number (n2)> ");
    scanf("%d",&n2);

    printf("n1 = %d and n2 = %d\n",n1,n2);
    new = n1;
    n1 = n2;
    n2 = new;
    printf("Now, n1 = %d and n2 = %d",n1,n2);

return (0);
}