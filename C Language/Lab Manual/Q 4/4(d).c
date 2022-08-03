/*WAP to find percentage of 5 subjects*/

#include<stdio.h>
void main()
{
	float maths,phy,chem,eng,comp,average,total,percentage;
	
	printf("Enter the marks of maths\nphy\nchem\neng\ncomp");
	scanf("%f%f%f%f%f",&maths,&phy,&chem,&eng,&comp);
	
	total = eng + phy + chem + maths + comp;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;
    
     printf("Percentage = %.2f", percentage);

}