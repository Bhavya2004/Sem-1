#include <stdio.h>
#include<math.h>

int factorial(unsigned int num)
{
    int res=1;
    if(!num)
        return res;
    while(num>0)
        res*=num--;
    return res;
}   
void main() 
{
int x,terms,sign=1;
float result=0.0;

printf("Enter the value of x");
scanf("%d",&x); 

for(terms =0; terms<10; ++terms,sign=sign*-1)
{
    result+=(pow(x,terms)/factorial(terms))*sign;
}
printf("%f",result);

}