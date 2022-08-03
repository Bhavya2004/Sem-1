#include<stdio.h>
void main()
{
	int i=0,n;
	printf("Enter upto how many number to print");
	scanf("%d",&n);
	while(i<=n)
	{
		if (i%2!=0)
		{
			printf("odd numbers are:%d\n",i);			
		}
		i++;
	}
}