//For pattern :  5 5 5 5 5
//   			 4 4 4 4
//   			 3 3 3
//   			 2 2
//   			 1  

#include<stdio.h>
void main()
{
	int n,i,j;
	printf("\nEnter no. of line in pattern : ");
	scanf("%d",&n);
	
		for (i=n ; i>0 ; i--)
	{
		for (j=1 ; j<=i ; j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}