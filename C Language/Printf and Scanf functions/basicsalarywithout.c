#include<stdio.h>
void main()
{
	float basicsalary,hra,da,grosssalary;

	printf("Enter your basic salary");
	scanf("%f",&basicsalary);

	hra=( basicsalary*20)/100;
	printf("hra=%f",hra);

	da=(basicsalary*80)/100;
	printf("da=%f",da);

	grosssalary=(basicsalary+hra+da);
	printf("gross salary=%f",grosssalary);
}