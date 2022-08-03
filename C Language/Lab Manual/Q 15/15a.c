//For pattern :  1
//   			 1 2
//   			 1 2 3
//   			 1 2 3 4 
//   			 1 2 3 4 5 

#include<stdio.h>
void main()
{
	int n,i,j;
	printf("\nEnter no. of line in pattern : ");
	scanf("%d",&n);
	
	for (i=1 ; i<=n ; i++)
	{
		for (j=1 ; j<=i ; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}

}