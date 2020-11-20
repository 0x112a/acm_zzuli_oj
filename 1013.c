#include<stdio.h>
#include<math.h>

int main(void){
	float x1,y1,x2,y2,aws;
	scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
	aws = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("%.2f",aws);
	return 0;
}
