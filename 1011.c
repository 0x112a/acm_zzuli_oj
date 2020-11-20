#include<stdio.h>
#define PI 3.14159

int main(void){
	float r,h;
	scanf("%f %f",&r,&h);

	printf("%.2f\n",2*PI*r*r+2*PI*r*h);
}
