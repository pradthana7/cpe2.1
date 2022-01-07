#include <stdio.h>
int total(int n);
int main(){
    int n, res;
    printf("Enter a number> ");
    scanf("%d", &n);
    
    res = total(n);
    printf("The sum of 1 to %d is %d",n, res);

    return 0;
}
/*  โปรแกรมผลรวมตั้งแต่ 1 ถึงค่าที่รับมา(input)
 *  1 + 2 + 3 + ... + (n - 1) + n ,where n is a data value
 */
int total(int n){
    int i, Total;
    i = n;
    Total = (i*(i+1))/2.0;
    return (Total);

}