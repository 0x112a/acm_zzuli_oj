#include<stdio.h>

int main(void){
	int x,y;
	int m,n;
	scanf("%d %d",&m,&n);
	y=(n-2*m)/2;
	x=m-y;
	printf("%d %d",x,y);
	return 0;
}
