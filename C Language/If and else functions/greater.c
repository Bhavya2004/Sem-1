#include<stdio.h>
void main()
{
	int a;
	int b;

	printf("Please enter number 1");
	scanf("%d",&a);

	printf("please enter number 2");
	scanf("%d",&b);

	if (a>b)
	{
		printf("num 1 is greater than num 2");
	}

	else
	{
		printf("num 2 is greater than num 1");
	}
}