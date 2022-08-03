
#include<stdio.h>
void main()
{
	char a;

	printf("Enter a character");
	scanf("%c",&a);
	
	//If the ASCII value of the character is between 65 and 90, print "Upper".	
	if(a>=65 && a<=90)
	{
		printf("Entered character is a uppercase character",a);
    }
	//If the ASCII value of the character is between 97 and 122, print "Lower".
	else if(a>=97 && a<=122)
	{
		printf("Entered character is a lowercase character",a);
	}
	//If the ASCII value of the character is between 48 and 57, print "Number".
	else if(a>=48 && a<=57)
	{
		printf("Entered character is a number",a);
	}
	else
	{
		printf("Entered character is a special symbol",a);
	}
}