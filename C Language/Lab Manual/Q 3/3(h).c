/*WAP to calculate area of traingle*/

#include<stdio.h>
void main()
{
  int b,h,area;
  
  printf("Enter the value of base");
  scanf("%d",&b);
  
  printf("Enter the value of height");
  scanf("%d",&h);
  
  area=b*h*0.5;
  printf("area=%d",area); 	
}