#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,ans;
	
	printf("Enter the value of base");
	scanf("%d",&a);
	
	printf("Enter the value of power");
	scanf("%d",&b);
	
	ans=pow(a,b);
	printf("your ans =%d",ans);

}