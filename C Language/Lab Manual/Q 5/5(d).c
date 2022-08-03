#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the value of a");
	scanf("%d",&a);
	
	printf("enter the value of b");
	scanf("%d",&b);
	
	printf("enter the value of c");
	scanf("%d",&c);
	
	if(a>b && a>c)
	printf("a is largest");
	
	if(b>a && b>c)
	printf("b is largest");
	
	if(c>a && c>b)
	printf("c is largest");
}