#include<stdio.h>
void main()
{
	char c;
	
	printf("Enter a alphabet\n");
	scanf("%c",&c);
	
	if((c=='a' || c=='e' || c=='i' || c=='o' || c=='u') || (c=='A' || c=='E' || c=='I' || c=='O' || c=='U'))
	printf("Entered alphabet is a vowel",c);
	
	else
	printf("Entered alphabet is a consonant",c);
}