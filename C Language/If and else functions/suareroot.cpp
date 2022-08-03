#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,r1,r2;
	printf("enter equation in form of ax^2+bx+c\n");
	
	printf("enter value of a:\n");
	scanf("%f",&a);
	
	printf("enter value of b:\n");
	scanf("%f",&b);
	
	printf("enter value of c:\n");
	scanf("%f",&c);
	
	d=(b*b)-(4*a*c);
	
	if(d>0)
	{   
		r1=(((-b)+sqrt(d))/(2*a));
		printf("%f",r1);
		r2=(((-b)-sqrt(d))/(2*a));
		printf("%f",r2);
	}
	if(d==0)
	{
		r1=(-b)/(2*a);
		printf("%f",r1);
		
	}
	if(d<0)
	{
		printf("\nno root is possible");
	}
	
}