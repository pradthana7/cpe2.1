#include <stdio.h>
int main()
{
    int no_row, row,col, space;
    char ch = 65;
    printf("Enter number of rows> ");
    scanf("%d", &no_row);

        /* pyramid ส่วนบน */
    for(row=1; row <= no_row; row++){
        for(space = no_row - row; space >= 1; space--){
            printf(" ");
        }
        for(col=1; col <= 2*row -1; col++){
            printf("*");
        }
        printf("\n");
    }
        /* pyramid ส่วนล่าง */
    for(row=no_row-1; row >=1; row--){
        for(space = 1; space <= no_row-row; space++){
            printf(" ");
        }
        for(col=1; col <= 2*row -1; col++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
