#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int num;
	
	scanf("%d", &num);
	
	num  = abs(num);
	int prev_digit = -1;
	int duplicates = 0;
	
	while (num > 0) { 
	    int current_digit = num % 10;  
	    if (current_digit == prev_digit){
	        duplicates = 1;
	        break;
	    } 
	    prev_digit = current_digit;
	    num /= 10;  
	}
	
	printf ("%s", duplicates ? "YES" : "NO"); 
	return 0;
}