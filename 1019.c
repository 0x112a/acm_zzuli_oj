#include<stdio.h>

int main(void){
	int n ;
	scanf("%d",&n);	
	if (n<30) {
		printf("%d\n",n*50);
	}else {
		printf("%d\n",n*48);
	}
	return 0;
}
