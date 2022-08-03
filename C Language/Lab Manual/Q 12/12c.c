#include<stdio.h>
void main()
{
	int n,remainder,rev=0;

	printf("Enter your number");
	scanf("%d",&n);

	while(n>0)
	{
		remainder=n%10;
		rev=(rev*10)+remainder;
		n=n/10;
	}
	printf("rev number=%d",rev);

}