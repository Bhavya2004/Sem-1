#include <stdio.h>
void main()
{
	int n,sum=0,i=1;

	printf("Enter the value of n\n");
	scanf("%d",&n);

	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("%d",sum);
}