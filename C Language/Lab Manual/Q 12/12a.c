#include<stdio.h>
void main()
{
	int n,remainder;

	printf("Enter your number");
	scanf("%d",&n);

	while(n>0)
	{
		remainder=n%10;
		printf("%d\n",remainder);
		n=n/10;
	}
	
}