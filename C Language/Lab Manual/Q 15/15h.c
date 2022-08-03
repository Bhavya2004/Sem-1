//For pattern :  * * * * *
//   			 *       *
//   			 *       *
//   			 *       *
//   			 * * * * *  

#include<stdio.h>
void main()
{
	int n,i,j,k;
	printf("\nEnter no. of line in pattern : ");
	scanf("%d",&n);

	for (i=1 ; i<=n ; i++)
	{
		if (i==1 || i==n)
		{
			for (j=1 ; j<=5 ; j++)
			{
				printf("* ");
			}
		}
		else
		{
			printf("* ");
			for (k=1 ; k<=3 ; k++)
			{
				printf("  ");
			}
			printf("*");
		}
		printf("\n");
		printf("\n");
	}

}