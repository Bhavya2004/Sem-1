#include<stdio.h>
void main()
{
	 int n, i=1;
	 float num, sum = 0, avg;
	 
	 printf("How many numbers?\n");
	 scanf("%d",&n);
	 
	 while(i<=n)
	 {
	  printf("Enter number-%d: ",i);
	  scanf("%f", &num);
	  sum = sum + num;
	  i++;
	 }
	 avg = sum/n;
	 printf("\nSum = %0.2f", sum);
	 printf("\nAverage = %0.2f", avg);
	 
	 
}