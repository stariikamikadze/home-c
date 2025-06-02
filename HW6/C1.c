#include <stdio.h>

int absolute(int num)
{
    return (num < 0) ? -num : num;
}

int main () 
{
    int number;
    scanf("%d", &number);
    
    int result = absolute(number);
    printf("%d", result);
    return 0;
}