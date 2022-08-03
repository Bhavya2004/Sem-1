/*WAP to calculate and print average of 2 numbers using scanf*/

#include<stdio.h>
void main()
{
	int a,b,average;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	average=(a+b)/2;
	printf("average=%d",average);
}