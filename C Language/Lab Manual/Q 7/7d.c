#include<stdio.h>
void main()
{
	int a;
	int b;
	int c;

	printf("enter your number\n");
	scanf("%d",&a);

	printf("enter your 2nd number");
	scanf("%d",&b);
    
    printf("enter your choice\n");
	printf("1=add\n");
	printf("2=sub\n");
	printf("3=mult\n");
	printf("4=div\n");
	scanf("%d",&c);
     
     if (c==1)
     {
     printf("Result=%d+%d=%d\n",a,b,a+b);
     }
	 else if (c==2)
     {
	printf("Result=%d-%d=%d\n",a,b,a-b);
     }
     else if (c==3)
     {
    printf("Result=%d*%d=%d\n",a,b,a*b);
     }
     else
     {	
        printf("Result=%d/%d=%d\n",a,b,a/b); 	
     }	
}