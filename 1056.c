#include<stdio.h>

int main(void){
	int m,n,aws=0;
	scanf("%d %d",&m,&n);
	for(;m<=n;m++){
		
		if((m%7)==0 && (m%4!=0)){
			aws=m;
		}
	}
	if (aws != 0)
		printf("%d\n",aws);
	else
		printf("no");
	return 0;
}
