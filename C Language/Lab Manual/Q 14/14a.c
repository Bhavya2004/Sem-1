#include<stdio.h>
void main()
{
	int sum = 0,n;
	printf("Enter the value of n");
	scanf("%d",&n);
	
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
        	{
		        sum=sum+j;
			}
		}
	printf("sum=%d",sum);    
}