#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,r1,r2,i1,i2,i;
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
		printf("%.2f\n",r1);
		r2=(((-b)-sqrt(d))/(2*a));
		printf("%.2f",r2);
	}
	if(d==0)
	{
		r1=(-b)/(2*a);
		printf("%.2f",r1);
		
	}
	if(d<0)
	{
		i1=((((-b)+sqrt(d))/(2*a)));
	
		printf("%f",i1);
	}
	
}