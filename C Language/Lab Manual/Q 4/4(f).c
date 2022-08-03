#include<stdio.h>
void main()
{
	int km,m,feet,inches,cm;
	printf("Enter the value of km");
	scanf("%d",&km);
	
	m = km * 1000;
    feet = km * 3280.84;
    inches = km * 39370.1;
    cm = km * 100000;
    
    printf("m=%d,feet=%d,inches=%d,cm=%d",m,feet,inches,cm);
}