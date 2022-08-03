#include<stdio.h>
void main()
{
	float maths,phy,chem,eng,comp,average;
	
	printf("Enter the marks of maths\nphy\nchem\neng\ncomp");
	scanf("%f%f%f%f%f",&maths,&phy,&chem,&eng,&comp);
	
	average=(maths+phy+chem+eng+comp)/5;
	
	printf("average=%f",average);
}