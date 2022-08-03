#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,discriminant,root1,root2,r,p,q;

	printf("Equation is ax^2+bx+c");
    printf("\n Enter a :");
    scanf("%f",&a);

    printf("\n Enter b :");
    scanf("%f",&b);

    printf("\n Enter c :");
    scanf("%f",&c);

discriminant=(b*b)-(4*a*c);

if (discriminant<0)
{
	printf("\nNo roots possible");
}

if (discriminant==0)
{
	root1=root2=(-b)/2*a;
	printf("\nonly one root possible : %f",r);
}

if (discriminant>0)
{
	p=(-b)+sqrt(discriminant);
	root1=p/(2*a);
	q=(-b)-sqrt(discriminant);
	root2=q/2*a;
	printf("\nRoots of given equation are: %.2f and %.2f",root1,root2);
}	
}
