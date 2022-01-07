/*  There are 9,870 people in a town whose population increases by 10% each 
year. Write a loop that displays the annual population and determines how 
many years ( count_years ) it will take for the population to surpass 30,000.*/
#include <stdio.h>
#define PEOPLE 9870
int main(){
    int coun_years, people ;
    printf("   COUNT_YEARS      PEOPLES\n\n");
    coun_years = 0;
    for( people= PEOPLE;
        people < 30001;
        people += 987){
            coun_years++;
        printf("%9d%17d\n", coun_years, people);
        }
    return 0;
}