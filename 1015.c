#include<stdio.h>

int main(void){
	int h,m,s,aws;
	scanf("%d:%d:%d",&h,&m,&s);
	aws = 3600*h+60*m+s;
	scanf("%d:%d:%d",&h,&m,&s);
	aws=(3600*h+60*m+s)-aws;
	printf("%d\n",aws);
	return 0;
}
