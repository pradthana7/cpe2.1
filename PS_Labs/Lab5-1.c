#include <stdio.h>
int main(void){
    int no_row , row, col;
    printf("Please enter a number> ");
    scanf("%d", &no_row);

    for (row = 0; row <= no_row; row++)
    {
        for (col = 0; col <= row; col++)
            printf("%d ", col);
        printf("\n");
        
    }
    
    for (row = no_row-1; row >= 0; row--)
    {
        for (col = 0; col <= row; col++)
            printf("%d ", col);
        printf("\n");
        
    }
    
    return (0);
}