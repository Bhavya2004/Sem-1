#include<stdio.h>
float interest(float p,float r,float n);
float interest(float p,float r,float n)
{
	float SI;
	SI=(p*r*n)/100;
	return SI;
}
void main()
{
	float p,r,n;
	printf("Enter the value of p\n");
	scanf("%f",&p);
	printf("Enter the value of r\n");
	scanf("%f",&r);
	printf("Enter the value of n\n");
	scanf("%f",&n);

	float result=interest(p,r,n);
	printf("interest=%f",result);
}