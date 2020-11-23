#include<stdio.h>

#define START 1998

int main(void){
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int aws,year,i,SumDay,weekDay;
	scanf("%d",&year);
	SumDay=aws=0;
	for(i=START;i<year;i++){
		if ((i%4==0 && i%100!=0) || (i%400==0 && i%100==0)){
			SumDay+=366;
		}
		else
			SumDay+=365;
	}
	weekDay=(SumDay+3)%7+13;
	printf("1-1=%d\n",(SumDay+3)%7);
	if ((year%4==0 && year%100!=0 )||( year%400==0 && year%100==0))
			a[1]=29;
	for(i=0;i<12;i++){
		printf("todya=%d,week=%d\n",weekDay,weekDay%7);
		if (weekDay%7==5) 
			aws++;
		weekDay+=a[i];
	}
	printf("%d\n",aws);
	return 0;
}
