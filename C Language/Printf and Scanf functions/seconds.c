#include<stdio.h>
void main()
{
	int sec,h,m,s;
	
	printf("Enter the value of sec");
	scanf("%d",sec);
	
	h=sec/3600;
	printf("h=%d",h);
	
	m=(sec%3600)/60;
	printf("m=%d",m);
	
	s=(sec%3600)%60;
	printf("s=%d",s);
}