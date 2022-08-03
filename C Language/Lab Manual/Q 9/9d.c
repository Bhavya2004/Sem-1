#include<stdio.h>
void main()
{
	int i,n;
	printf("From");
	scanf("%d",&i);
	printf("To");
	scanf("%d",&n);
	while(i<=n)
	{
		if (i%2==0 && i%3!=0)
		{
			printf("The number which are divisible by 2 but not 3 are:%d\n",i);	
		}
		
		i++;
	}
}