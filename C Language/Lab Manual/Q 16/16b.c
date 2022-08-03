#include<stdio.h>
void main()
{
	int Size,i,n[10];
	int odd = 0, even = 0;
	
	printf("\n Please Enter the Size of an Array :  ");
 	scanf("%d", &Size);
 	
 	printf("Enter array elements\n");
	for(i=0;i<Size;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<Size;i++)
	{
		if (n[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}

	printf("no of odd elements=%d\n",odd);
	printf("no of even elements=%d",even);
}