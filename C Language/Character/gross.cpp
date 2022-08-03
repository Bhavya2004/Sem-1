#include<stdio.h>
int main()
{
	int bs,hra,gs,da;
	printf("enter your basic salary:");
	scanf("%d",&bs);
	if(bs>=30000)
	{
		da=bs*(0.95);
		hra=bs*(0.3);
		gs=bs+da+hra;
		printf("gross salary=%d",gs);
	}
	else if(bs>=20000)
	{
		da=bs*(0.9);
		hra=bs*(0.25);
		gs=bs+da+hra;
		printf("gross salary=%d",gs);
	}
	else if(bs>=10000)
	{
		da=bs*(0.8);
		hra=bs*(0.2);
		gs=bs+da+hra;
		printf("gross salary=%d",gs);
	}
}