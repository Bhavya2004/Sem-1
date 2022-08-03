#include<stdio.h>
void main()
{
	int n;
	printf(" Enter any number");
	scanf("%d",&n);
	
	if((n%10)%2==0)
	{
 	 printf("\n Last Digit of Number is Even");
	}
 	else
 	{
  	printf("\n Last Digit of Number is Odd");
 	}
	
}