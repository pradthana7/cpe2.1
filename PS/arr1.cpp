#include <stdio.h>
int main(void){
	int x;
	int a[x], el, i;
	printf("Input size: ");
	scanf("%d", &el);
	printf("Input elements: ");
	for(i = 0; i<el;i++){
		scanf("%d", &a[i]);
	}
	printf("Output:");
	for(i=0;i<el;i++){
		if(i<el-1)
			printf("%d, ",a[i]);
		else
			printf("%d", a[i]);
	}
	return (0);
}
