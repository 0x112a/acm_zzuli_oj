#include<stdio.h>

int main(void){
	int i,aws=0;
	scanf("%d",&i);
	while (i>0) {
		i/=10;
		aws++;
	}
	printf("%d\n",aws);
	return 0;
}
