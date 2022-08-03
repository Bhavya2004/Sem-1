 #include<stdio.h>
 #include<math.h>
 void main()
 {
 	float r,r1,r2,i1,i2,a,b,c,d;
 	printf("write equation in the form of ax^2+bx+c");
 	printf("enter a");
 	scanf("%d",&a);
 	printf("enter b");
 	scanf("%d",&b);
 	printf("enter c");
 	scanf("%d",&c);
 	
 	d=(b*b)-(4*a*c);
 	
 	if(d>0)
 	{
 		r1=(-b+sqrt(d))/(2*a);
 		r2=(-b-sqrt(d))/(2*a);
 		printf("roots are distinct=%.2f,%.2f",r1,r2);
	 }
	 if(d=0)
	 {
	 	r=(-b/(2*a));
	 	printf("roots are same=%.2f",r);
	 }
	 if(d<0)
	 {
	 	i1=(-b+sqrt(-d))/(2*a);
	 	i2=(-b-sqrt(-d))/(2*a);
	 	printf("roots are imaginary=%.2f,%.2f",i1,i2);
	 }
}