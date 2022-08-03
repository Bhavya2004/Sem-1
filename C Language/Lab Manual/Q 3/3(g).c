/*WAP a calculate area of circle*/

#include<stdio.h>
void main()
{
	float r,area;
	
	printf("Enter the value of r");
	scanf("%f",&r);
	
	area=3.14*r*r;
	
	printf("area=%f",area);
}