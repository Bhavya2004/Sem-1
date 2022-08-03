/*WAP to convert seconds into hours,minutes and seconds and print in HH:MM:SS*/

#include<stdio.h>
void main()
{
	int sec,h,m,s;
	printf("Enter the value of sec");
	scanf("%d",sec);

	h=sec/3600; 
	m=(sec%3600)/60;
	s=(sec%3600)%60;
	
	printf(" %d hours :%d minutes :%d seconds",h,m,s);
	
}