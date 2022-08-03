#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter a");
	scanf("%d",&a);
	
	printf("enter b");
	scanf("%d",&b);
	
	printf("enter c");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("a is largest");
		}
	}
	if(b>a)
	{
		if(b>c)
		{
			printf("b is largest");
		}
	}
	if(c>a)
	{
		if(c>b)
		{
			printf("c is largest");
		}
	}
	
}