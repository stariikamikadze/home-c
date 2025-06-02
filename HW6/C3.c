#include <stdio.h>

int middle(int a, int b)
{
    return (a + b) / 2;
}

int main () 
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    
    printf("%d", middle(X, Y));
    return 0;
}