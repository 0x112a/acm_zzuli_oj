#include<stdio.h>

int main(void){
	int v;
	scanf("%d",&v);
	printf("%d %d %d\n",v%10,v/10%10,v/100);
	return 0;
}
