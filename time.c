#include<stdio.h>
#include<time.h>

int main(void){
	/*mothod 1
	int a;
	clock_t start,stop;
	scanf("%d",&a);
	start=clock();
	while (a>0) {
		a--;
	}
	stop=clock();
	printf("%lf",((double)(stop-start))/CLOCKS_PER_SEC);
	*/
	//mothod 2
	int a;
	time_t start,stop;
	scanf("%d",&a);
	start=time(NULL);
	while (a>0) {
		a--;
	}
	stop=time(NULL);
	printf("%lf",(double)difftime(stop,start));
	
	return 0;
}
