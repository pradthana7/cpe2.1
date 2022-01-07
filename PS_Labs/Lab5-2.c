/*  จงปรับปรุงโปรแกรมภาษาซีที่เขียนในข้อที่1ให้สามารถตรวจสอบข้อมูลที่ผู้ใช้ป้อนได้โดยที่จะแสดง ผลลัพธก์็ต่อเมอื่ ค่าตัวเลขที่ป้อนเข้ามาอยู่ในช่วง 1–9 เท่านั้น
หากป้อนเป็นตัวเลขที่อยู่นอกชว่งดังกล่าว จะแสดงข้อความว่า"Number %d is not in range."หรือหากป้อนเป็นตัวอักษระ จะแสดงข้อความว่า"%c is an invalid input." 
และจะทําการวนซํ้าเพื่อรับค่าข้อมูลไปเรื่อยๆ จนกว่าข้อมูลที่ป้อนจะอยู่ในช่วงดังกล่าว แล้วจึงแสดงผลลัพธ์    */


#include <stdio.h>
int main(void){
    int no_row , row, col, error,s;
    char ch;
    do{
        error = 0;
        printf("Please enter a number> ");
        s = scanf("%d", &no_row);
        
        if(s != 1){
            error = 1;
            scanf("%c", &ch);
            printf("%c is an invalid input.\n", ch);
            continue;
            
        }
                    
        
        else if(no_row<1 || no_row>9)
        {
            error = 1;
            printf("Number %d is not range.\n", no_row); 
            continue;
            
        }
        
                
            
    }while (error);
        /*  ทำดักจับข้อมูลที่ไม่ต้องการในลูป do while ให้เสร็จก่อนพอทำเสร็จแล้วก็มาทำfor loop
        ซึ่งจะเป็นช่วงที่เราอนุญาตให้ไม่ถูกดักจับ*/
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
     
 
