#include <stdio.h> 

void main ()
{ /* local variable definition */ 
    int i, j, a, b;

// Ask user to enter lower value of interval
    printf("Enter lower bound of the interval: ");
    scanf("%d", &a); // Take input
 
    // Ask user to enter upper value of interval
    printf("\nEnter upper bound of the interval: ");
    scanf("%d", &b); // Take input
 
    // Print display message
    printf("\nPrime numbers between %d and %d are:\n ", a, b);
    for(i=a; i<=b; i++)
    { 
        for(j=2; j <= (i/j); j++) 
            if(!(i%j))
                break; // if factor found, not prime 
        if(j > (i/j))
            printf("%d is prime\n", i); 
    }
}