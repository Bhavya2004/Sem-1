#include <stdio.h>
void main()
{
	int n, flag=0;
	printf("Enter number to find its prime or not\n");
	scanf("%d",&n);

	for (int i=2;i<n;i++)
	{
		if (n%i==0)
		{
			flag=1;
			break;
		}
	}

	if (flag==0)
	{
		printf("prime\n");
	}
	
	if(flag==1)
	{
		printf("Nonprime\n");
	}
}