#include<stdio.h>
double f(double d);
int main(void){
	int a;
	double b,aws;
	scanf("%d %lf",&a,&b);
	while (a>0) {
		b=f(b);
		a--;
	}
	printf("%.6f",b);
	return 0;
}
double f(double d){
	return d*1.0225;
}
