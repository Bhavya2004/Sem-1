#include<stdio.h>
double fact(double);
double fact(double a)
{
	double flag=1.0,i=1.0;
	while(i<=a)
	{
		flag=flag*i;
		i=i+1.0;
	}
	return flag;
}
void main()
{
	double f,ans=1.000000,j=1.0;
	while(j<=20.0)
	{
		f=1/fact(j);
		ans=ans+f;
		j=j+1.0;
	}
	printf("\ne = 1+(1/1!)+(1/2!)+(1/3!)+...");
	printf("\ne = %.2lf",ans);
}