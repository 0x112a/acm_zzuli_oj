#include<stdio.h>
int cs( int year );
int main( void )
{
	int year;
	scanf("%d",&year);
	printf("%d\n",cs( year ));
	return 0 ; 
} 
int cs( int year )
{
	int i , day = 0 , xq  ;
	for( i = 1998 ; i < year ; i ++ ) 
	{
		if( (i % 4 == 0 && i %100 != 0)||( i%100 ==0 && i%400 == 0 ) )
		{
			day++;
		}
		day += 365 ; 
	}
	xq = (day + 3 )%7 ;
	int yfts[12] = {31 ,28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31 };
	int sum = 0 , ts = 0 ; 
	for( i = 0 ; i < 12 ; i ++ )
	{
		
		if( (year % 4 == 0 && year %100 != 0)||( year%100 ==0 && year%400 == 0 ) )
		{
			if( i == 2 )
			{
				ts ++ ; 
			} 
		}
		if( (xq + ts + 13 ) % 7 == 5 )
		{
			sum ++ ; 
		}	
		ts += yfts[i] ; 
		printf("todya=%d,week=%d\n",ts,(xq+ts+13)%7);
	}
	return sum ; 
}

