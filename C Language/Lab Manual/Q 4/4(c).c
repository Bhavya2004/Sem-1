/*WAP to find out distance travelled by the equation d=(u*t)+(a*(t*t))*/

#include<stdio.h>
void main()
{
	float d,u,a,t;
	
	printf("Enter the value of u");
	scanf("%f",&u);
	
	printf("Enter the value of a");
	scanf("%f",&a);
	
	printf("Enter the value of t");
	scanf("%f",&t);
	
	d=u*t+a*t*t;
	
	printf("d=%f",d);
}