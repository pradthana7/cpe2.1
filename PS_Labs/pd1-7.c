#include <stdio.h>
#define CBEGIN 10
#define CLIMIT -5
#define CSTEP 5
int main(){
    int i,fah;
    
    printf("Celius     Fahrenheit\n");
    for(i = CBEGIN; i>=CLIMIT; i-= CSTEP){
        fah = 1.8*i + 32;
        printf("%4d%12d\n", i, fah);
    }

    return 0;
}