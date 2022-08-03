#include<stdio.h>
void main()
{
	//5648 5+8 first and last digits
	
	int a,n,p;
	
	printf("please enter any digits ");
	scanf("%d",&n);
	
	for(int i=1;n>=0;)
	{
		if(n/1000)
		{
			p=n/1000;
			
		break;
	}
		
	}	
	if(a%10)
	{
		n=a%10;
		
		printf("%d",a+p);
	}
	else{
		printf("error");
	}
}