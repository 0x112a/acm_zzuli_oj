#include<stdio.h>
int main()
{
	int i,j,t;
	long long sum,max;
	
	int a[100010];
	scanf("%d",&t);
	for(i = 0;i < t;i ++)
		scanf("%d",&a[i]);
	max = sum = a[0];
	for(i = 1;i < t;i ++)
	{
		if(sum >= 0)
			sum += a[i];
		else
			sum=a[i];
	    if(max<sum)  
            {  
                max=sum;  
            }  
	 } 
	 printf("%lld\n",max);
}

