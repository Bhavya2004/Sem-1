#include<stdio.h>
void main()
{
	float salary,hra,da,gross;
	
	printf("Enter your salary");
	scanf("%f",&salary);
	printf("\n ********************************************");

	if(salary>=10000)
		{
			hra=(salary*20)/100;
	printf("\nhra=%.4f",hra);

	        da=(salary*80)/100;
	printf("\nda=%.4f",da);

	        gross=(salary+hra+da);
	printf("\ngross=%.4f",gross);        
	    }
	    else if(salary>=20000)
	    {
	    	hra=(salary*25)/100;
	printf("\nhra=%.4f",hra);

	        da=(salary*90)/100;
	printf("\nda=%.4f",da);

	        gross=salary+hra+da;
	printf("\ngross=%.4f",gross); 
	    }	
	    else if(salary>=30000)
	    {
	    	hra=(salary*30)/100;
	printf("\nhra=%.4f",hra);

	        da=(salary*95)/100;
	printf("\nda=%.4f",da);

	        gross=(salary+hra+da);
	printf("\ngross=%.4f",gross); 
	    }
	    else{

	    	printf("Error !! :(");
	    }
}