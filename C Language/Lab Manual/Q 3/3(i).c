/*WAP to calculate simple interest*/

#include<stdio.h>
void main()
{
	float p,r,n,interest;
	
	printf("Enter the value of p");
	scanf("%f",&p);
	
	printf("Enter the value of r");
	scanf("%f",&r);
	
	printf("Enter the value of n");
	scanf("%f",&n);
	
	interest=(p*r*n)/100;
	printf("interest=%f",interest);
	
} 