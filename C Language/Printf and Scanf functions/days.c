#include<stdio.h>
void main()
{
	int days,d,w,y;
	printf("enter no of days");
	scanf("%d",&days);
	
	y=days/365;
	printf("year=%d",y);
	
	w=(days%365)/7;
	printf("week=%d",w);
	
	d=(days%365)%7;
	printf("day=%d",d);
	
}