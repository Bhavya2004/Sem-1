#include<stdio.h>
void main()
{
	int a;
	int b;
	int c;

	printf("Please enter number 1");
	scanf("%d",&a);

	printf("please enter number 2");
	scanf("%d",&b);

	printf("please enter number 3");
	scanf("%d",&c);

	if (a>b && a>c)
	{
		printf("num 1 is greater than both");
	}

	else if(b>c && b>a)
	{
		printf("num 2 is greater than both");
	}
	else
	{
		printf("num 3 is greater than both");
	}
}