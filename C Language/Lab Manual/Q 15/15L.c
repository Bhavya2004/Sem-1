//For pattern :     *
//   			   * *
//   			  * * *
//   			 * * * *   

#include<stdio.h>
void main()
{
	int n,i,j,k;
	printf("\nEnter no. of line in pattern : ");
	scanf("%d",&n);
	
	for (i=1 ; i<=n ; i++)
	{
		for (j=i ; j<n ; j++)
		{
			printf(" ");
		}
		for (k=1 ; k<=i ; k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
}