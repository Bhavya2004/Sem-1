/*WAP to convert temperature from  celsius to fahrenheit*/

#include<stdio.h>
void main()
{
	float f,c;
	
	printf("enter value of celsius");
	scanf("%f",&c);
	
	f=(c*1.8)+32;
	
	printf("fahrenheit=%f",f);
	
}