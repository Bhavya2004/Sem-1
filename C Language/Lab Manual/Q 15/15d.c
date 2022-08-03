//For pattern :  1
//   			 0 1
//   			 1 0 1
//   			 0 1 0 1 

#include<stdio.h>
void main()
{
	int n,i,j,temp;
	printf("\nEnter no. of line in pattern : ");
	scanf("%d",&n);
	
	
	for (i=1 ; i<=n ; i++)
	{
		if (i%2==0)
		{
			temp=0;
		}
		else
		{
			temp=1;
		}
		j=i;
		printf("%d ",temp);
		while((j/2)!=0 && j<(i+i)-1)
			{
				if (temp==0)
				{
					printf("%d ",temp+1);
					temp++;
				}
				else
				{
					printf("%d ",temp-1);
					temp--;
				}
				j++;
			}
		printf("\n");
	}
}