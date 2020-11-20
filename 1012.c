#include<stdio.h>

int main(void){
	float i;
	scanf("%f",&i);
	if(i<=0)
		i*=-1;
	printf("%.2f",i);
	return 0;
}
