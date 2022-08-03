#include<stdio.h>
void main()
{
	int s1,s2,s3,s4,s5,t,p;
	
    printf("\n Enter marks of 5 subjects each out of 100 ");
    printf("\n\n ********************************************");
    
     printf("\n\n Maths = ");
     scanf("%d",&s1);

     printf("\n Science = ");
     scanf("%d",&s2);

     printf("\n English = ");
     scanf("%d",&s3);

     printf("\n History = ");
     scanf("%d",&s4);

     printf("\n Geography = ");
     scanf("%d",&s5);
     
     printf("\n ********************************************");
     
     t=s1+s2+s3+s4+s5; //total
     printf("\n\nTotal marks=%d/500",t);
     
     p=t/5; //percentage
     printf("\n\n Percentage=%d",p);
     
      printf("\n ********************************************");
      
             /////If Statement//////
             if(p>=80)
             printf("\n\nYour Grade: A+");
             
             else if(p>=75)
             printf("\n\nYour Grade: A");
             
             else if(p>=60)
             printf("\n\nYour Grade: B");
             
             else if(p>=45)
             printf("\n\nYour Grade: C");
             
             else if(p>=35)
             printf("\n\nYour Grade: D");
             
             else
             printf("\n\nYou are Fail");
}