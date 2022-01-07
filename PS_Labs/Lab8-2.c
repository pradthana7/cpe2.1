
#include <stdio.h>
int main(void){
    int i, a[24];
    printf("Index   Element\n");
    a[0] = 0;
    a[1] = 1;
    for( i=2; i < 24; i++){
        a[i] = a[i-1] + a[i-2];
    }
    for(i=0; i<24;i++){
        printf("%3d   %5d\n",i,a[i]);
    }
   return (0);
}
