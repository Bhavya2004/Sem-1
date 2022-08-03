# include <stdio.h>
 
void main()
{
    int a, b, c, largest ;
 
    printf("Enter three numbers : ") ;
 
    scanf("%d %d %d", &a, &b, &c) ;
 
    largest = a > b ? a: b;
	 
	 
    printf("\nThe largest number is : %d",largest*c) ;
}