#include<stdio.h>
void main()
{
	int i=1,sum=0,n;

	printf("Enter the value of n\n");
	scanf("%d",&n);

	while(i<=n)
	{
		sum=sum+(i*i);
		i++;
	}
	printf("sum=%d\n",sum);

}