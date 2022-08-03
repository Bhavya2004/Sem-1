#include<stdio.h>
void main()
{
	int n,i,j,temp;
	printf("\nEnter number of lines for nxn tables :");    
	scanf("%d",&n);
	
	for (i=1 ; i<=n ; i++)
	{
		temp=i;
		for (j=1 ; j<=n ; j++)
		{
			printf("%d    ",temp);
			temp=temp+i;
		}
		printf("\n");
	}
}