#include<stdio.h>
void main()
{
	int a,b,i=1,ans=1;

	printf("Enter the value of base a \n");
	scanf("%d",&a);
	printf("Enter the value of power b \n");
	scanf("%d",&b);

	while(i<=b)
	{
		ans=ans*a;
		i++;
	}
	printf("ans=%d\n",ans);
}