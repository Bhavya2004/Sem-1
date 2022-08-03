//For pattern :     1
//   			   A B
//   			  2 3 4
//   			 C D E F   

#include<stdio.h>
void main()
{
	int n,i,j,k,l=1,temp;
	printf("\nEnter no. of line in pattern : ");
	scanf("%d",&n);
	
	char m='A';
	for (i=1 ; i<=n ; i++)
	{
		for (j=i ; j<n ; j++)
		{
			printf(" ");
		}
		if (i%2==0)
		{
			for(k=1 ; k<=i ; k++)
			{
				printf("%c ",m);
				m++;
			}
		}
		else
		{
			temp=l+i;
			while (l<temp)
			{
				printf("%d ",l);
				l++;
			}
		}
		printf("\n");
	}
}