//For pattern :  * * * * * * * * * * *
//   			   * * * * * * * * *
//   			     * * * * * * *
//   			       * * * * *
//   			         * * *
//                         *

#include<stdio.h>
void main()
{
	int n,i,j,k,temp;
	printf("\nEnter no. of line in pattern : ");
	scanf("%d",&n);
	
	for (i=n ; i>0 ; i--)
	{
		for (k=i ; k<n ;k++)
		{
			printf("  ");
		}
		temp=i+i;
		for (j=1 ; j<temp ; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}