#include<stdio.h>
void main()
{
	int n,remainder,sum=0;

	printf("Enter your number");
	scanf("%d",&n);

	while(n>0)
	{
		remainder=n%10;
		sum=sum+remainder;
		n=n/10;
	}
	printf("sum=%d\n",sum);

}