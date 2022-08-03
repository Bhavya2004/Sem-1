/*logic:
	sum=1;
	sum=sum+(x^a/a!)
	a++
*/
	
#include<stdio.h>
#include<math.h>
void main()
{
	int x,n,a,p,f=1;
	float d,sum=1;
	
	printf("Enter the value of x");
	scanf("%d",&x);
	
	printf("Enter how many terms");
	scanf("%d",&n);
	
	for(a=1;a<n;a++)
	{
		p=pow(x,a);
		f=f*a;
		d= (float) p/f; 			/*here both p and f are int so we have to typecaste any one so we used float*/
		sum=sum+d;
	}
	printf("%f",sum);
}