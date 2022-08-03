#include<stdio.h>
void main()
{
   int side1, side2, side3;
  
   printf("Enter sides of triangle:");
   scanf("%d%d%d",&side1,&side2,&side3);
  
   if(side1 == side2 && side2 == side3)
      {
	  printf("The Given Triangle is equilateral\n");
   }
   else if(side1 == side2 || side2 == side3 || side3 == side1)
      {
	  printf("The given Triangle is isosceles\n");
  }
   else
      {
	  printf("The given Triangle is scalene\n");
  }
  
    if(((side2*side2)+(side3*side3)==(side1*side1)) || ((side1*side1)+(side3*side3)==(side2*side2)) || ((side1*side1)+(side2*side2)==(side3*side3)))  
  {
  	   printf("The given triangle is an right angled traingle");
	  }    
	else
	{
		printf("The given triangle is not rightangle triangle");
	  }  
}