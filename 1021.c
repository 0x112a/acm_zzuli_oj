#include<stdio.h>
#define Max(x,y,z) ((x>y?x:y)>z?(x>y?x:y):z)

int main(void){
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	printf("%d\n",Max(x, y, z));
	return 0;
}
