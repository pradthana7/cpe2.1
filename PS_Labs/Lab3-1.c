#include <stdio.h>
int main(void){
    float ph;
    printf("Please ente a pH value>  ");
    scanf("%f", &ph);

    if (ph > 7)
        if (ph >12){
            printf("Alkaline");
        }else
            printf("Very alkeline");
    

    else
    {
        if (ph == 7)
            printf("Neutral");

        else
            if (ph > 2)
                printf("Acidic");
            else
                printf("Very acidic");

    }


    return (0);
}