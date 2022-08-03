#include<stdio.h>
void main()
{
	int n,remainder,rev=0;

	printf("Enter your number");
	scanf("%d",&n);

	int a=n;

	while(n>0)
	{
		remainder=n%10;
		rev=(rev*10)+remainder;
		n=n/10;
	}
	printf("rev=%d\n",rev);
	printf("number=%d\n",n);
	if(rev==a)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}

}