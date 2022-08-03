#include <stdio.h>

void main()
{
	
	int a;
	int b;

	printf("Please Enter Number : ");
	scanf("%d",&a);

	if(a%2)
	{
		printf("Your number is : %d odd \n",a);

	}else
	{
		printf("Your number is : %d even \n",a);
	}

}