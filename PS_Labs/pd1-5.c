
#include <stdio.h>
int facto(int n);
int main(){
    int n, ret;
    printf("Enter a number> ");
    scanf("%d", &n);
    
    ret = facto(n);
    printf("%d! = %d",n, ret);
    return 0;
}
/*  Function factorial computes the factorial of an integer    */
int facto(int n){
    int i;
    int result ;
    result = 1;
    for(i=n; i>1; i--){
        result *= i;
    }
        return (result);
        /*  หรือจะใช้ while loop ต่อจาก result =1;
            i=n;
            while(i>1){
                result *= i;
                i--;*/
        
}

