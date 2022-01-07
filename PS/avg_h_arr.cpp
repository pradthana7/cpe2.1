#include <stdio.h>
int main(void){
	int num,i,j;
	float h[j], sum=0.0, avg; //  j is number of element
	printf("Please enter number of students> ");
	scanf("%d",&num);
	
	for(i=0; i<num; i++){
		printf("Please enter student height [%d]> ",i+1);
		scanf("%f",&h[i]);
		sum += h[i];
		
	}
	avg = sum/num;
	printf("Average height: %.2f", avg);
	
}

