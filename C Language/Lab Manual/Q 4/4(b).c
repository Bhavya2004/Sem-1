/* WAP to convert temperature from  fahrenhiet to celsius*/

#include<stdio.h>
void main()
{
	float f,c;
	
	printf("enter value of fahrenheit");
	scanf("%f",&f);
	
	c=(((f-32)*5))/9;
	
	printf("celcius=%f",c);
	
}