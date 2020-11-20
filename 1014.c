#include<stdio.h>
#include<math.h>

int main(void){
	float x1,y1,x2,aws;
	scanf("%f %f %f",&x1,&y1,&x2);
	aws=(x1+x2+y1)/2;
	aws=sqrt(aws*(aws-x1)*(aws-x2)*(aws-y1));
	printf("%.2f",aws);
	return 0;
}
