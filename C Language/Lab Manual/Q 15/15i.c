//For pattern :  * * * * *
//   			 * * * *
//   			 * * *
//   			 * *
//   			 *

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
			printf("* ");
		}
		printf("\n");
	}
}