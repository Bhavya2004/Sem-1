#include<stdio.h>
void main()
{
	int a,b,choice,addition,subtraction,multiplication,division;
	printf("enter the value of a");
	scanf("%d",&a);
	
	printf("enter the value of b");
	scanf("%d",&b);
	
	printf("Enter your choice\n");
	printf("1=addition\n");
	printf("2=subtraction\n");
	printf("3=multiplication\n");
	printf("4=division\n");
	scanf("%d",&choice);
	
	if(choice==1)
	{
	addition=a+b;
	printf("addition=%d\n",addition);
}
	if(choice==2)
	{
	
	subtraction=a-b;
	printf("subtraction=%d\n",subtraction);
}
	if(choice==3)
	{
	
	multiplication=a*b;
	printf("multiplication=%d\n",multiplication);
}
	if(choice==4)
	{
	
	division=a/b;
	printf("division=%d\n",division);
}
}