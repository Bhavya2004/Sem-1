#include<stdio.h>
void main()
{
	int days,y,w,d;
	printf("Enter the number of days");
	scanf("%d",&days);
	
	y=days/365;
	w=(days%365)/7;
	d=(days%365)%7;
	
	printf("year=%d,week=%d,days=%d",y,w,d);
}