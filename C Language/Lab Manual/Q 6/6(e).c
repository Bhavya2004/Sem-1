#include<stdio.h>
void main()
{
	int basic,hra,da,gross;
	printf("enter your basic salary");
	scanf("%d",&basic);
	
	if(basic>=10000)
    {
    	if(basic<20000)
    	{
		hra=(0.2)*basic;
		da=(0.8)*basic;
		gross=basic+hra+da;
		printf("gross=%d",gross);		
		}
    }
    if(basic>=20000)
    {
    	if(basic<30000)
    	{
    	hra=(0.25)*basic;
		da=(0.9)*basic;
		gross=basic+hra+da;
		printf("gross=%d",gross);
		}
	}
	if(basic>30000)
	{
		hra=(0.3)*basic;
		da=(0.95)*basic;
		gross=basic+hra+da;
		printf("gross=%d",gross);
	}
}