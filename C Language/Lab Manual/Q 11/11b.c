#include<stdio.h>
void main()
{
	int n,fact=1,i=1;

	printf("Enter the value of n");
	scanf("%d",&n);

	while(i<=n)
	{
		fact=fact*n;
		n--;
	}
	printf("fact=%d\n",fact );
}