#include <stdio.h> 

int main ()
{
	int digit, number, summ;
	scanf("%d", &number);
	summ = 0;
	while (number !=0){  
	    digit = number % 10; 
	    summ += digit;    
	    number /= 10;  
	}
	printf ("%d", summ); 	  
	return 0;
}