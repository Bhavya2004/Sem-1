#include<stdio.h>
void main()
{
  int num, i=1;
  
  printf("Enter number: ");
  scanf("%d",&num);
  
  printf("Factors of %d are:\n", num);
  
  while (i<=num/2) 
  {
    if(num%i==0) 
	{
	printf("%d\t",i);	
	}
    i++;
  }
  
}